  #include <stdio.h>
#include <stdlib.h>


void main(){


int n,i;
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	int *arr = (int*)calloc(n,sizeof(int));
	
	
	printf("Enter %d numbers for array ",n);	
	
	for (i=0;i<n;i++){
		scanf("%d",arr+i);		
	}
	
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	arr = (int *)realloc(arr,3);
	
	printf("\nEnter additional 3 elements");
	for (i=n;i<n+3;i++){
		scanf("%d",arr+i);
	}
	
	for(i=0;i<n+3;i++){
		printf("%d  ",arr[i]);
	}
	

}
