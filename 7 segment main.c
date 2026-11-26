#include<reg52.h>
void delayms(unsigned int ms);
void main()
while(1)
	{ P0=0xF940;
		delayms(250);
		P0=0xF9;
		delayms(250);
		P0=0xA4;
		delayms(250);
		P0=0xB0;
		delayms(250);
		P0=0x99;
		delayms(250);
		P0=0x92;
		delayms(250);
		P0=0x82;
		delayms(250);
		P0=0xF8;
		delayms(250);
		P0=0x80;
		delayms(250);
		P0=0x90;
		delayms(500);
	} 
}
void delayms(unsigned int ms)
{ unsigned int i,j;
	for(i=0;i<ms;i++)
	{ for(j=0;j<ms;j++);
	}
}
	
