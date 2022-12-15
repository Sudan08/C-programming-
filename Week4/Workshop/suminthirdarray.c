#include <stdio.h>
#include <stdlib.h>

void main(){
	int n,i;
	printf("Enter the length of the number : ");
	scanf("%d",&n);
	int *arr = (int*)calloc(n,sizeof(int));
	int *arr1 =(int*)calloc(n,sizeof(int));
	int *arr2 =(int*)calloc(n,sizeof(int));
	
	printf("Enter %d numbers for 1st array ",n);	
	
	for (i=0;i<n;i++){
		scanf("%d",arr+i);		
	}
	
	printf("Enter %d numbers for 2nd array ",n);	
	
	for (i=0;i<n;i++){
		scanf("%d",arr1+i);		
	}
	
	
	for(i=0;i<n;i++){
		arr2[i] = arr[i]+arr1[i];
	}
	
	for(i=0;i<n;i++){
		printf("%d  ",arr2[i]);
	}
	free(arr);
	free(arr1);
	free(arr2);
}
