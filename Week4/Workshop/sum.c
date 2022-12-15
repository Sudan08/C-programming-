#include <stdio.h>
#include <stdlib.h>

void main(){
	int n,i;
	printf("Enter the length of the number : ");
	scanf("%d",&n);
	int *arr = (int*)calloc(n,sizeof(int));
	printf("Enter %d numbers for 1st array ",n);	
	
	for (i=0;i<n;i++){
		scanf("%d",arr+i);		
	}
	sum(arr,n);
	free(arr);
}

void sum(int *arr,int n){
	int sum = 0,i;
	for (i=0;i<n;i++){
		sum += arr[i];
	}
	printf("%d",sum);
	
}
