#include<reg52.h>
sbit LED=P2^3;
void delayms(unsigned int ms);
void main()
{ while(1)
	{ LED=(0x00|0x08);
		delayms(50);
		LED=(0x08&0x00);
		delayms(50);
		LED=(0x00^0x08);
		delayms(50);
	}
}
void delayms(unsigned int ms)
{ unsigned int i,j,k;
	for(i=0;i<ms;i++)
	for(j=0;j<ms;j++)
	for(k=0;k<ms;k++);
}