#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <wiringPi.h>
#define DHT11 0
using namespace std;

class dht11{
	int data[5];
public:
	dht11();
	void Send();
	void Response();
	void Process();
	void GetData();
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
	cout << "Phase 1" << endl;
	pinMode(DHT11, OUTPUT);		// MCU send out start siganl
	digitalWrite(DHT11, LOW);	// and pulls down voltage
	delay(20);			// for at least 18ms to let DHT11 detect the signal
	digitalWrite(DHT11, HIGH);	// MCU pulls up voltage
	delayMicroseconds(30);		// and waits for DHT respons(20~40)us
} // 5.2 MCU Sends out Start Signal to DHT
void dht11::Response()
{
	cout << "Phase 2" << endl;
	pinMode(DHT11, INPUT);

	while(digitalRead(DHT11)!=LOW);  // DHT send out a low-voltage-level response signal
	while(digitalRead(DHT11)!=HIGH); // DHT pulls up voltage and keeps it for 80us and prepares for data transmisson
} // 5.3 DHT Response to MCU
void dht11::GetData()
{
	cout << "Phase 3" << endl;
	int count = 0;
	for(int i = 0 ; i < 5 ; i++)
	{
		for(int j = 0 ; j < 8 ; j++)
		{
			while(digitalRead(DHT11) != LOW);	// start to transmit 1-bit data(50us)
			while(digitalRead(DHT11) != HIGH);
			while(digitalRead(DHT11))
			{
				count++;
				delayMicroseconds(1);
			}
			if(count > 30)
			{
				data[i] <<= 1;
				data[i] |= 1;
			}
			else
			{
				data[i] <<= 1;
			}
			count = 0;
		}
	}
	if(data[4] == data[0] + data[1] + data[2] + data[3])
		cout << "correct" << endl;
	else
		cout << "Not correct" << endl;
}
void dht11::Process()
{
	Send();
	Response();
	GetData();
	delay(1000);			// wait 1s
}
int main()
{
	if(wiringPiSetup() == -1)
		exit(1);
	dht11 mdht11;
	while(1)
		mdht11.Process();
}
