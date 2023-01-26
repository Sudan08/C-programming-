#include <pthread.h>
#include <stdio.h>

char retval[] = "Hello there!";

void *threadOne(void *p){
pthread_exit(retval);
}

void main(){
void *pretval1;
pthread_t thrID1;
pthread_create(&thrID1, NULL, threadOne, NULL);
pthread_join(thrID1, &pretval1);
printf("*pretval1 = %s\n", (char *)pretval1);
}
