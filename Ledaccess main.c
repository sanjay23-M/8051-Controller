#include<reg52.h>
void delayms(unsigned int ms);
	void  main()
	{ int i;
		for(i=1;i<2;i++)
			{ 
				P0=0x01;
				delayms(250);
				P0=0x02;
				delayms(250);
				P0=0x04;
				delayms(250);
				P0=0x08;
				delayms(250);
				P0=0x10;
				delayms(250);
				P0=0x20;
				delayms(250);
				P0=0x40;
				delayms(250);
				P0=0x80;
				delayms(250);
				 }while(1);
			}
	void delayms(unsigned int ms)
	{ unsigned int i,j;
		for(i=0;i<ms;i++)
		{ for(j=0;j<ms;j++);
		}
	}
