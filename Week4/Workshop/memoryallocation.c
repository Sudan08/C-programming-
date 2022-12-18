  #include <stdio.h>
#include <stdlib.h>

void main(){
	int *ptr1 = (int*)malloc(sizeof(int));
	char *ptr2 = (char*)malloc(sizeof(char));
	float *ptr3 = (float*)malloc(sizeof(float));
	
	printf("Enter a integer : ");
	scanf("%d",ptr1);
	
	printf("\nEnter a float : ");
	scanf("%f",ptr3);
	
	printf("\nEnter a char : ");
	scanf("%c",ptr2);
	scanf("%c",ptr2);
	printf("\nThe int entered is : %d",*ptr1);
	printf("\nThe char entered is : %c ",*ptr2);
	
	printf("\nThe float entered is : %.1f",*ptr3);
}
