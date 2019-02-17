#include "strategy2.h"
#include <stdio.h>
#include <unistd.h>
void strategy2()
{
	int x=200;
	extern int y;
	while(1)
        {
                printf("startegy two running:%d:%d\n",x,y);
                sleep(5);
		x--;
		y++;
		if(x==101)
			x=200;
        }
}
