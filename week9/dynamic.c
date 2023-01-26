#include <pthread.h>
#include <stdio.h>

struct arg{
	int thread_id;
	int start;
	int end;
};


void *threadOne(void *p){
	struct arg *val = (struct arg*)p;
	int i;
	for( i=val->start; i<val->end; i++){
		printf("%d \n",i);	
}
}


void main(){
int no,i,start,end;
printf("Enter number of threads") ;
scanf("%d",&no);
int chunck = round((1000/no));
int chunck2 = (chunck * (no -1));

start = 1;
end = chunck;
struct arg arr[no];
for (i= 0 ; i< no -1; i++){
	arr[i].start = start;
	arr[i].end = end;
	start = end+1;
	end = end + chunck;
}
arr[no-1].start = chunck2+1;
arr[no-1].end = 1000;
pthread_t thread[no];


for (i=0;i<no;i++){
	pthread_create(&thread[i], NULL, threadOne, &arr[i]);
}
for (i=0;i<no;i++){
	pthread_join(thread[i], NULL);
}


}
