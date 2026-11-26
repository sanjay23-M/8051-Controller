#include <reg52.h>
sbit LED = P1^1;
unsigned char count=0;
void Timer0_ISR(void) interrupt 1
{
	   TH0 = 0x3C;
      TL0 = 0xB0;
	     
	count++;
	if(count>=20)
	{count=0;
		LED=!LED;
}}
void main(void)
{
	LED=0;
	TMOD = (TMOD & 0xF0) | 0x01;
   TH0 = 0;
   TL0 = 0;
   ET0 = 1;  
   TR0=1;
    EA = 1;    // Enable global interrupts
    while(1)
    {

    }
}