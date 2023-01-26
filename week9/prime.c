#include <pthread.h>

#include <stdio.h>

struct arg{
	int thread_id;
	int start;
	int end;
}a1,a2;

void *threadOne(void *p){
	struct arg *val = (struct arg*)p;

	int i,j , flag = 0;
	for(i=val->start; i<val->end; i++){
		for(j=2;j <= i/2;j++){
			if (i % j == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			printf("%d \n",i);
		}
		flag=0;
}

}



void main(){

pthread_t thrID1, thrID2;

a1.thread_id = 1;
a1.start = 2;
a1.end = 250;

a2.thread_id = 2;
a2.start = 251;
a2.end = 500;



pthread_create(&thrID1, NULL, threadOne, &a1);

pthread_create(&thrID2, NULL, threadOne, &a2);

pthread_join(thrID1, NULL);

pthread_join(thrID2, NULL);

}
