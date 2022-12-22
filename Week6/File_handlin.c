#include <stdio.h>

#include <stdlib.h>

void main()

{

FILE *fptr;

int x,y,n;

fptr = fopen("file01.txt","r");

n = fscanf(fptr,"%d,%d",&x,&y);

printf ("x=%d, y=%d \n",x,y);

fclose(fptr);

}
