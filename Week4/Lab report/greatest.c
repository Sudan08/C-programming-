# include <stdio.h>

void main(){
	int arr[5]={1,2,9,4,5};
	int i,greatest,size;
	size = sizeof(arr)/sizeof(arr[0]);
	greatest = arr[0];
	for(i=0;i<size;i++){
		if (arr[i]>greatest){
			greatest = arr[i];
		}
	}
	printf("The greatest number from the array is : %d",greatest);
}
