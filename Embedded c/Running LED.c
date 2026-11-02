#include<reg51.h>

void delay()
{
	int i,j;
	
	for(i = 0; i < 6000; i++)
	{
		for(j = 0; j < 800; j++);
  }
}
void main()
{
	unsigned char led;
		while(1)
		{
			led = 0x01;
			while(led != 0)
			{
				P1 = led;
				delay();
				led = led << 1;
			}
		}
	}