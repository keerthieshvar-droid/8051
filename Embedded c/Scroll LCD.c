#include<reg51.h>
#define LCD P2^0

sbit RS = P3^0;
sbit EN = P3^1;

void delay ()
{
	int i,j;
	for(i = 0; i < 200; i++)
	{
		for(j = 0; j < 1000; j++);
	}
}
void cmd_led(unsigned char load)
{
	LCD = load;
	RS = 0;
	EN = 1; 
	delay();
	EN = 0;
}
void lock(unsigned char value)
{
	LCD = key;
	RS = 1;
	EN = 1;
	delay();
	EN = 0;
}
void main()
{
	unsigned char i;
	
	cmd_led(0x38);
	cmd_led(0x0C);
	cmd_led(0x01);
	cmd_led(0x80);
	
	lock('E');
	lock('M');
	lock('B');
	lock('E');
	lock('D');
	lock('D');
	lock('E');
	lock('D');
	
	while(1);
	{
		for(i = 0; i < 16; i++)
		{
			cmd_led(0x18);
			delay();
		}
	}
}