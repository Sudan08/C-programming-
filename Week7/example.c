#include <pthread.h>

#include <stdio.h>

struct arg{
	int thread_id;
	int start;
	int end;
}a1,a2;

void *threadOne(void *p){
	struct arg *val = (struct arg*)p;

	int i;
	for( i=val->start; i<val->end; i++){
	printf("Thread One: i=%d\n",i);
}

}


void main(){

pthread_t thrID1, thrID2;

a1.thread_id = 1;
a1.start = 1;
a1.end = 500;

a2.thread_id = 2;
a2.start = 501;
a2.end = 1000;



pthread_create(&thrID1, NULL, threadOne, &a1);

pthread_create(&thrID2, NULL, threadOne, &a2);

pthread_join(thrID1, NULL);

pthread_join(thrID2, NULL);

}
