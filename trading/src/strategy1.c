#include "strategy1.h"
#include <stdio.h>
#include <unistd.h>
void strategy1()
{
	int x=100;
	extern int y;
	while(1)
	{
		printf("startegy one running:%d:%d\n",x,y);
		sleep(3);
		x--;
		y--;
		if(x==0)
			x=100;
	}
}
