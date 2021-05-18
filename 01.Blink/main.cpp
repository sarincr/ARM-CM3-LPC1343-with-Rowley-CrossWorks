#include <lpc13xx.h>

int main(void)
{
        int i,j;
	LPC_GPIO2->DIR = (1<<4); 
	while(1)
	{
		LPC_GPIO2->DATA = (1<<4); 
                for(i=0; i < 1000; i++)
                {
                for(j=0; j < 1000; j++);
                }
		LPC_GPIO2->DATA = 0x0; 
                for(i=0; i < 1000; i++)
                {
                for(j=0; j < 1000; j++);
                }
	}
	return 0;
}	
