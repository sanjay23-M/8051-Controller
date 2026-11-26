#include <reg52.h>

void UART_Init(void)
{
SCON = 0x50; // UART Mode 1, receiver enabled

TMOD = (TMOD & 0x0F) | 0x20;

                   // Timer 1, Mode 2, 8-bit auto-reload

 

PCON &= 0x7F;      // SMOD = 0

 

TH1 = 0xFD;        // 9600 baud for 11.0592 MHz

TL1 = 0xFD;

 

TR1 = 1;           // Start Timer 1

 

TI = 0;

RI = 0;

}

void UART_TxChar(char ch )
{
SBUF =ch ; // Start transmitting

while(TI == 0)

{

    // Wait for transmission completion

}

 

TI = 0;            // Clear transmit flag

}

void main(void)
{
UART_Init();

while(1)

{

    UART_TxChar('A');
	 UART_TxChar('\r');
	 UART_TxChar('\n');
	

}

}

 