# include <stdio.h>

int grtandsml(int *arr){
	int i, greatest=arr[0], smallest=arr[0];
	for (i=0;i<3;i++){
		if(greatest < arr[i]){
			greatest = arr[i];
		}
		if (smallest > arr[i]){
			smallest = arr[i];
		}
	}
	int result[2] = {greatest , smallest};
	return &result;
}

void main(){
	int arr[3], i ;
	printf("Enter three number");
	for (i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	int *result = grtandsml(&arr);
	printf("The greatest is : %d \n",result[0]);
	printf("The smalles is : %d",result[1]);
}
