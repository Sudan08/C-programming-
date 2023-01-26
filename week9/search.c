#include <stdio.h>
#include <pthread.h>

struct info
{
    int thread_id;
    int start;
    int end;
};

int elements[] = {7,8,3,1,5,9,3};
int numToFind;
int isfound = 0;
void *display(void *p)
{
	int i;
    struct info *var = (struct info *)p;
    for (i = var->start; i < var->end + 1; i++)
    {
        if (elements[i]== numToFind)
        {
            printf("Thread %d: %d\n", var->thread_id, i);
            printf("On index %d in the array\n", i - 1);
            isfound = 1;
            pthread_exit(NULL);
        }
    }
}

void main()
{
	int i;
    int num_thread = 2;
    int limit = sizeof(elements) / sizeof(int);
    int size = limit / num_thread;
    pthread_t thread[num_thread];
    struct info threads[num_thread];
    printf("Enter a number");
    scanf("%d", &numToFind);
    for ( i = 0; i < num_thread; i++)
    {
        threads[i].thread_id = i + 1;
        threads[i].start = i * size + 1;
        if (i == num_thread - 1)
        {
            threads[i].end = limit;
        }
        else
        {
            threads[i].end = (i * size) + size;
        }
    }
    for (i = 0; i < num_thread; i++)
    {
        pthread_create(&thread[i], NULL, display, &threads[i]);
    }
    for (i = 0; i < num_thread; i++)
    {
        pthread_join(thread[i], NULL);
    }

    if (isfound == 0)
    {
        printf("Number Not Found");
    }
}
