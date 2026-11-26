#include<reg52.h>
void delayms(unsigned int ms);
unsigned char seg[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
	{unsigned int i;
	 for(i=0;i<1000;i++)
		{ 
			P0=seg[i/100];
			delayms(50);
			P2=seg[(i/10)%10];
			delayms(50);
		  P3=seg[i%10];
			delayms(50);
		}
	while(1);
}
	void delayms(unsigned int ms)
	{unsigned int i,j,k;
		for(i=0;i<ms;i++)
		{for(j=0;j<ms;j++){for(j=0;j<ms;j++);
		}
	}
			
}