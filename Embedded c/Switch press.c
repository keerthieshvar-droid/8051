#include<reg51.h>

sbit LED = P1^0;
sbit ACCESS = P2^0;
void main()
{
	while(1)
	{
		if(ACCESS == 0)
		{
			LED = 1;
		}
		else
		{
			LED = 0;
		}
	}
}