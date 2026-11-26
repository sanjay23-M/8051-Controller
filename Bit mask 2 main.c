#include<reg52.h>
#define PORT P2
sbit BUTTON=P2^4;
sbit LED=P2^0;
void main()
{  BUTTON==1;
	while(1)
		
	{ if(PORT&0x80)
		{LED=1;
	}
		else{LED=0;}
}
	}
