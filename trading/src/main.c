#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "scheduler.h"

#define maxthreads 10
int y=100;

int main(int argc, char *argv[])
{

	int beg=atoi(argv[1]);
	int end=atoi(argv[2]);
	pthread_t threads[maxthreads];
	int ret[maxthreads];
	int stno[maxthreads];
	for(int i=beg;i<=end;i++)
	{
		stno[i]=i;
		ret[i]= pthread_create(&threads[i],NULL,scheduler,(void *)&stno[i]);
		if(ret[i]!=0)
			printf("Failed to create thread for startegy %d\n",i);
		else
			printf("successfully spawned thread for strategy %d\n",i);

	}
	for(int i=beg;i<=end;i++)
			pthread_join(threads[i],NULL);
}
