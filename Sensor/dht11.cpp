#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>

#include <wiringPi.h>
#define DHT11 1
using namespace std;

class dht11{
	uint8_t RH_i, RH_d, TP_i, TP_d, checksum;
public:
	dht11();
	void Send();
	void Response();
	void Process();
	void GetData();
};
dht11::dht11()
{
	RH_i = RH_d, TP_i, TP_d, checksum = 0;
}
void dht11::Send()
{
	cout << "Phase 1" << endl;
	pinMode(DHT11, OUTPUT);		// MCU send out start siganl
	digitalWrite(DHT11, LOW);	// and pulls down voltage 
	delay(20);			// for at least 18ms to let DHT11 detect the signal
	digitalWrite(DHT11, HIGH);	// MCU pulls up voltage and 
	delayMicroseconds(40);		// waits for DHT respons(20~40)us
} // 5.2 MCU Sends out Start Signal to DHT
void dht11::Response()
{
	cout << "Phase 2" << endl;
	pinMode(DHT11, INPUT);

	while(digitalRead(DHT11)!=LOW);  // DHT send out a low-voltage-level response signal
	while(digitalRead(DHT11)!=HIGH); // DHT pulls up voltage and keeps it for 80us and prepares for data transmisson
	while(digitalRead(DHT11)!=LOW);  // start to transmit 1-bit data (50us)
} // 5.3 DHT Response to MCU
void dht11::GetData()
{
	int count = 0;
	char data;
	char state = HIGH;
	cout << "Phase 3" << endl;
	
	for(int i = 0 ; i < 40 ; i++)
	{
		while(digitalRead(DHT11) == state)
		{
			count ++;
			delayMicroseconds(1);
		}
	}
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
