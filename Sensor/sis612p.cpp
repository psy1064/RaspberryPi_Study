#include<iostream>
#include<wiringPi.h>

#define HUMAN 1

using namespace std;

int main()
{
	if (wiringPiSetup() == -1)
		exit(1);

	pinMode(HUMAN, INPUT);

	while (1)
	{
		if (digitalRead(HUMAN) == HIGH)
		{
			cout << "HIGH" << endl;
		}
		else
			cout << "LOW" << endl;
		delay(1000);
	}
}