#include <reg52.h>
sbit BUTTON = P1^0;
sbit LED    = P2^0;

void delay()
{ 
	int i;
	for(i=0;i<1000;i++);
}
  void main()
{ 
	BUTTON =1; 
	LED=0;
	  

 while(1)
{
 if(BUTTON == 0)
{
	delay();
	
    if(BUTTON == 0)
		{
			LED=!LED;
			
			while(BUTTON == 0);
			delay();
 }
  

    }

}
}
