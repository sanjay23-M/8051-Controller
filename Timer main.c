#include <reg52.h>

 

sbit LED = P1^0;

 

void main(void)

{

    TMOD = (TMOD & 0xF0) | 0x05;

 

    TR0 = 0;

    TF0 = 0;

 

    TL0 = 0x00;

    TH0 = 0x00;

 

    TR0 = 1;

 

    while(1)

    {

        while(TL0 < 10)

        {

            // Wait until 10 external pulses are counted

        }

 

        TR0 = 0;

 

        LED = !LED;

 

        TL0 = 0x00;

        TH0 = 0x00;

        TF0 = 0;

 

        TR0 = 1;

    }

}
