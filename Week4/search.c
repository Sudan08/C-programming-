#include <stdio.h>

void main(){
	int n,i,flag=0,arrlength;
	int arr[5] = {1,2,3,4,5};
	printf("Enter a number :");
	scanf("%d",&n);
	arrlength = sizeof(arr)/sizeof(arr[0]);
	int *ptr = arr;
	for(i=0;i<arrlength;i++){
		if(n == *(ptr+i)){
			printf("The number %d is in the index %d",n,i);
			flag=1;
		}
	}
	if(flag == 0 ){
		printf("Number not found in arr");
	}
}
