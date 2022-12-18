# include <stdio.h>

void main(){
	int arr[2][2],arr1[2][2];
	
	printf("for first array \n");
	printf("Enter a number at 1 1 postion : ");
	scanf("%d",&arr[0][0]);
	printf("Enter a number at 1 2 postion : ");
	scanf("%d",&arr[0][1]);
	printf("Enter a number at 2 1 postion : ");
	scanf("%d",&arr[1][0]);
	printf("Enter a number at 2 2 postion : ");
	scanf("%d",&arr[1][1]);
	
	printf("for second array \n");
	printf("Enter a number at 1 1 postion : ");
	scanf("%d",&arr1[0][0]);
	printf("Enter a number at 1 2 postion : ");
	scanf("%d",&arr1[0][1]);
	printf("Enter a number at 2 1 postion : ");
	scanf("%d",&arr1[1][0]);
	printf("Enter a number at 2 2 postion : ");
	scanf("%d",&arr1[1][1]);
	
	int i , j;
	int sum1=0,sum2=0,sum3=0,sum4=0;
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			if (i==0 && j==0){
				sum1 += arr[i][j] + arr1[i][j];
			}
			if (i==0 && j==1){
				sum2 += arr[i][j] + arr1[i][j];
			}
			if (i==1 && j==0){
				sum3 += arr[i][j] + arr1[i][j];
			}
			if (i==1 && j==1){
				sum4 += arr[i][j] + arr1[i][j];
			}
		}
	}
	
	printf("\nSum 1 : %d",sum1);
	printf("\nSum 2 : %d",sum2);
	printf("\nSum 3 : %d",sum3);
	printf("\nSum 4 : %d",sum4);
}
