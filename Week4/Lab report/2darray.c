# include <stdio.h>

void main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int rowSize = sizeof(arr)/sizeof(arr[0]);
	int columnSize = sizeof(arr[0])/sizeof(arr[0][0]);
	int i,j,sum1=0,sum2=0,sum3=0;
	for (i=0;i<rowSize;i++){
		for (j=0;j<columnSize;j++){
			if(j==0){
				sum1 = sum1 + arr[i][j];
			}
			if(j=1){
				sum2 = sum2 + arr[i][j];
			}
			if(j=2){
				sum3 = sum3 + arr[i][j];
			}
		}
	}
	printf("Sum of first column : %d",sum1);
	printf("\nSum of second column : %d",sum2);
	printf("\nSum of third column : %d",sum3);
}
