#include "scheduler.h"


void* scheduler(void* strategyno)
{
    int* stno=(int*)strategyno;
    switch(*stno)
	{
		case 1:
				strategy1();
				break;
		case 2:
                                strategy2();
                                break;

		default:
				break;
	}
}
