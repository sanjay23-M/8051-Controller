#include <reg52.h>
#define LCD_DATA P2
sbit RS = P3^0;
sbit EN = P3^2;
void delay(void)
{
unsigned int i, j;
for(i = 0; i < 100; i++)
for(j = 0; j < 100; j++);}
void lcd_command(unsigned char cmd)
{
   RS = 0;             // Command mode
LCD_DATA = cmd;     // Send all 8 bits
EN = 1;
delay();
EN = 0;
delay();	
}
 void lcd_data(unsigned char dat)
{ RS = 1;             // Character data mode
LCD_DATA = dat;     // Send all 8 bits
EN = 1;
delay();
EN = 0;
delay();
}
void lcd_init(void)
{ delay();
 lcd_command(0x38);  // 8-bit mode, 2 lines, 5x7 font

    lcd_command(0x0C);  // Display ON, cursor OFF

    lcd_command(0x01);  // Clear display

    lcd_command(0x06);  // Move cursor right
	}
void main(void)
{ lcd_init();
lcd_data('S');
lcd_data('A');
lcd_data('N');
lcd_data('J');
	lcd_data('A');
	lcd_data('Y');
	    while(1);

}