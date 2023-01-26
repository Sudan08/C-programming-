#include <pthread.h>

#include <stdio.h>


void *threadOne(void *p){
	int start = *(int *)p;
	int end = start + 199;
	int i;
	for(i=start; i<end; i++){
	printf("%d\n",i);
}

}


void main(){



pthread_t thread[5];

int num[5] = {1,201,401,601,801};



int i;
for (i=0;i<5;i++){
	pthread_create(&thread[i], NULL, threadOne, &num[i]);
}
for (i=0;i<5;i++){
	pthread_join(thread[i], NULL);
}

}
