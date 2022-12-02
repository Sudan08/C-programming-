# include <stdio.h>

void getTriangularNumber(int);

void main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	getTriangularNumber(a);
}

void getTriangularNumber(int a){
	int i;
	int sum = 0;
	for (i = 1;i<=a;++i){
		sum = sum + i;
		if (sum > a){
			break;
		}
		printf("%d ",sum);
	}
}
