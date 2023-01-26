#include <stdio.h>

#include <stdlib.h>


void main()
{

FILE *fptr;

char filename[]= "sum.txt";

fptr = fopen(filename,"a");

if (fptr == NULL) {

printf("Error creating file %s\n", filename);
 
exit(-1);

}

else {


int j ,number;
int sum = 0;

while(j == 0){
	printf("Enter a number : \n");
	scanf("%d",&number);
	sum += number;
	printf("Done? (i) 1 (ii) 0 \n");
	scanf("%d",&j);
}
  
	fprintf(fptr,"\nSum : %d",sum);

	

}

fclose(fptr);

}
