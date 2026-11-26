#include<reg52.h>
sbit LED=P1^0;
void delayms(unsigned int ms);
void main(void)
{
	  while(1)
		{ 
			LED=0;
			delayms(500);
			LED=1;
			delayms(500);
		}
	}
void delayms(unsigned int ms)
{ 
	 unsigned int i,j;
	  for(i=0;i<ms;i++)
	   {
			 for(j=0;j<115;j++);
		 }
	 }
