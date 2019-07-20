#include <iostream>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <wiringSerial.h>

using namespace std;

int main()
{
	int fd;
	uint8_t pms[32];
	uint16_t dust, checkcode = 0;
	if ((fd = serialOpen("/dev/ttyUSB0",9600)) < 0)
	{
		fprintf(stderr, "Unable serial", strerror (errno));
		return 1;
	}

	while(1)
	{
		for(int i = 0 ; i < 32; i++)
		{
			pms[i] = serialGetchar(fd);
			printf("pms[%d] = %d\n",i,pms[i]);
			if(i<30)
				checkcode += pms[i];
		}
		cout << endl;
		if( (pms[0] == 0x42) && (pms[1] == 0x4d) )
		{
			uint16_t tmp = (pms[30] << 8) + pms[31];
			cout << checkcode << tmp << endl;
			if(checkcode == tmp)
				cout << "RIGHT" << endl;
			dust = (pms[14] << 8) + pms[15];
			cout << "dust = " << dust << endl;
		}
		checkcode = 0;
	}
}
