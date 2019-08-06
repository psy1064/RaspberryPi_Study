#include <iostream>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <wiringPi.h>
#include <wiringSerial.h>

using namespace std;

int main()
{
	int fd;
	uint8_t pms[32];
	uint16_t pm1, pm25, pm10, checkcode = 0;
	if ((fd = serialOpen("/dev/ttyUSB0",9600)) < 0)
	{
		fprintf(stderr, "Unable serial", strerror (errno));
		return 1;
	}

	while(1)
	{
		cout << "============================" << endl;
		for(int i = 0 ; i < 32; i++)
		{
			pms[i] = serialGetchar(fd);
			printf("pms[%d] = %d\n",i,pms[i]);
			if(i<30)
				checkcode += pms[i];
		}
		cout << endl;
		if ((pms[0] == 0x42) && (pms[1] == 0x4d))
		{
			uint16_t tmp = (pms[30] << 8) + pms[31];
			cout << "Check code = " << checkcode << " sum result = " << tmp << endl;
			if(checkcode == tmp)	cout << "RIGHT" << endl;

			pm1 = (pms[10] << 8) + pms[11];
			pm25 = (pms[12] << 8) + pms[13];
			pm10 = (pms[14] << 8) + pms[15];

			cout << "PM 1.0 dust = " << pm1 << endl;
			cout << "PM 2.5 dust = " << pm25 << endl;
			cout << "PM 10 dust = " << pm10 << endl;
		}
		checkcode = 0;
		cout << "============================" << endl;
		delay(1000);
	}
}
