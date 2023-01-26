#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int counter = 0;
pthread_mutex_t a;
void *threadOne(void *p)
{
pthread_mutex_lock(&a);  
 int i;
 int temp; 
  


 for(i=1; i<=3; i++)
  { 
    temp = counter;
    sleep(1);
   counter = temp +1;
    
  }
 pthread_mutex_unlock(&a);
}
void *threadTwo(void *p)
{  
pthread_mutex_lock(&a);
 int i;
 int temp;
 for (i=1; i<=3; i++)
  { 
  
    temp = counter;
    sleep(1);
    counter = temp - 1;
  }
 pthread_mutex_unlock(&a);

}
void main()
{
 pthread_t thrID1, thrID2;
 pthread_mutex_init(&a,NULL);
 pthread_create(&thrID1, NULL, threadOne, NULL);
 pthread_create(&thrID2, NULL, threadTwo, NULL);
 pthread_join(thrID1, NULL); 
 pthread_join(thrID2, NULL);
 printf("counter = %d\n", counter);
 pthread_mutex_destroy(&a);


}

