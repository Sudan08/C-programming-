#include <stdio.h>

int main(){
	int size,i,j,greatest;
	printf("Enter size of array");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;++i){
		printf("Enter number");
		scanf("%d",&arr[i]);
	}
	greatest = arr[0];
	for (j=1;j<size;++j){
		if (arr[j]>greatest){
			greatest = arr[j];
		}
	}
	printf("%d",greatest);
}
