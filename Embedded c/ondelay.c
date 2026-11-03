#include<reg51.h>

sbit LED = P1^3;

void delay()
{
	int i;
	for(i = 0; i < 5000; i++);
}
void main()
{
	while(1)
	{
		LED = 1;
		delay();
		
		LED = 0;
		delay();
	}
}
	