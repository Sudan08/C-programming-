# include <stdio.h>



void main(){
	int n,i;
	printf("Enter number of elements on the array : ");
	scanf("%d",&n);
	int arr[n];
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Enter numbers : ");
	for (i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}	
	int sum =0;
	int *ptr = arr;
	for (i=0;i<size;i++){
		sum = sum + *(ptr+i);
	}
	printf("%d",sum);
}
