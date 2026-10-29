#include<reg51.h>

sbit LED = P1^0;

void delay()
{
	int i,j;
	
	for(i = 0; i < 900; i++);
	{
		for(j = 0; j < 800; j++);
  }
	
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
		 