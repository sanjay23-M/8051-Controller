
#include <reg52.h>

#define LCD_DATA P2

sbit RS = P3^0;
sbit EN = P3^2;

void delay(void)
{
    unsigned int i, j;
    for(i = 0; i < 50; i++)
        for(j = 0; j < 50; j++);
}

// Send command to LCD
void lcd_command(unsigned char cmd)
{
    RS = 0;

    LCD_DATA = cmd & 0xF0;
    EN = 1;
    delay();
    EN = 0;

    LCD_DATA = (cmd & 0x0F) << 4;
    EN = 1;
    delay();
    EN = 0;

    delay();
}

// Send character to LCD
void lcd_data(unsigned char dat)
{
    RS = 1;

    LCD_DATA = dat & 0xF0;
    EN = 1;
    delay();
    EN = 0;

    LCD_DATA = (dat & 0x0F) << 4;
    EN = 1;
    delay();
    EN = 0;

    delay();
}

// LCD initialization
void lcd_init(void)
{
    delay();

    RS = 0;
    LCD_DATA = 0x30;
    EN = 1;
    delay();
    EN = 0;
    delay();

    LCD_DATA = 0x30;
    EN = 1;
    delay();
    EN = 0;
    delay();

    LCD_DATA = 0x30;
    EN = 1;
    delay();
    EN = 0;
    delay();

    LCD_DATA = 0x20;
    EN = 1;
    delay();
    EN = 0;
    delay();

    lcd_command(0x28);  // 4-bit mode, 2 lines
    lcd_command(0x0C);  // Display ON, cursor OFF
    lcd_command(0x01);  // Clear display
    lcd_command(0x06);  // Cursor moves right
}

// Main program
void main(void)
{
    int i;

    lcd_init();

    while(1)
    {
        lcd_command(0x80);  // First row, first position

        lcd_data('W');
        lcd_data('E');
        lcd_data('L');
        lcd_data('C');
        lcd_data('O');
        lcd_data('M');
        lcd_data('E');

        lcd_command(0xC0);  // Second row, first position

        lcd_data('M');
        lcd_data(' ');
        lcd_data('S');
        lcd_data('A');
        lcd_data('N');
        lcd_data('J');
        lcd_data('A');
        lcd_data('Y');

        // Continuously shift display to the left
        for(i = 0; i < 16; i++)
        {
            lcd_command(0x1c);
            delay();
        }
    }
}
