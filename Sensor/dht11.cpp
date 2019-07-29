#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <wiringPi.h>
#define DHT11 1
using namespace std;

class dht11{
	uint8_t data[5];
public:
	dht11();
	void Send();
	void Response();
	void Process();
	int GetData();
};
dht11::dht11()
{
	for(int i = 0 ; i < 5 ; i++)
	{
		data[i] = 0;
	}
}
void dht11::Send()
{
	pinMode(DHT11, OUTPUT);		// MCU send out start siganl
	digitalWrite(DHT11, LOW);	// and pulls down voltage
	delay(20);			// for at least 18ms to let DHT11 detect the signal
	digitalWrite(DHT11, HIGH);	// MCU pulls up voltage
	delayMicroseconds(30);		// and waits for DHT respons(20~40)us
} // 5.2 MCU Sends out Start Signal to DHT
void dht11::Response()
{
	pinMode(DHT11, INPUT);

	while(digitalRead(DHT11)!=LOW);  // DHT send out a low-voltage-level response signal
	while(digitalRead(DHT11)!=HIGH); // DHT pulls up voltage and keeps it for 80us and prepares for data transmisson
	while(digitalRead(DHT11)!=LOW);  // Start to transmit next bit data
} // 5.3 DHT Response to MCU
int dht11::GetData()
{
	int count = 0;
	int j;
	for(j = 0 ; j < 40 ; j++)
	{
		count = 0;
		while(digitalRead(DHT11) == LOW)
		{
			delayMicroseconds(1);
			count++;
			if(count >= 255) return -1; 	// start to transmit 1-bit data(50us)
		} // When DHT is sending data to MCU, every bit of data begins with the 50us low-voltage-level
		count = 0;
		while(digitalRead(DHT11) == HIGH)
		{
			delayMicroseconds(1);
			count++;
			if(count >= 255) return -1;
		}
		data[j/8] <<= 1;
		if(count > 30)
		{
			data[j/8] |= 1;
		} // the length of the following high-voltage-level signal determines whether data bit is "0" or "1"
		  // 26-28us voltage-length means data "0"
		  // 70us voltage-length means data "1"
	}

	if((j>=40)&&(data[4] == data[0] + data[1] + data[2] + data[3]))
	{
		printf("hum = %d, temp = %d\n", data[0], data[2]);
		return -1;
	}
	else
	{
		// cout << "error";
		return -1;
	} // parity bit(data[4])
}
void dht11::Process()
{
	Send();
	Response();
	int result = GetData();
}
int main()
{
	if(wiringPiSetup() == -1)
		exit(1);
	dht11 mdht11;
	while(1)
	{
		mdht11.Process();
		delay(1000);		// wait 1s
	}
}
