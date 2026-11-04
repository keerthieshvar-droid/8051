#include<reg51.h>

sbit LED = P1^0;
sbit TOGGLE = P2^0;

void main()
{
	LED = 0;
	
	while(1)
	{
		if(TOGGLE == 0)
		{
			LED = !LED;
		while(TOGGLE == 0);
		}
	}
}