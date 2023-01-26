#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
void *threadOne(void *p){
char *retval;
retval= malloc(1000);
strcpy(retval, "Hello world!");
pthread_exit(retval);
}

void main(){
void *pretval;
pthread_t thrID1;
pthread_create(&thrID1, NULL, threadOne, NULL);
pthread_join(thrID1, &pretval);
printf("*pretval = %s\n", (char *)pretval);
free(pretval);
} 
