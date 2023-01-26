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


int arr[] = {6,4,9,1,14,75,69,44};

pthread_t thread[2];

int size = sizeof(arr)/sizeof(arr[0]);
if (size%2 == 0){
	int num[2] = {1,};	
}




int i;
for (i=0;i<2;i++){
	pthread_create(&thread[i], NULL, threadOne, &num[i]);
}
for (i=0;i<2;i++){
	pthread_join(thread[i], NULL);
}


}
