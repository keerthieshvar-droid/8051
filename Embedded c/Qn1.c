#include<reg51.h>

sbit LED = P1^0;
sbit BUTTON = P3^2;

void main()
{
	LED = 0;
	BUTTON = 1;
	while(1)   
	{
		if(BUTTON == 0)
		{
			LED = 1;
		}
		else
		{
			LED = 0;
	}
}
	}