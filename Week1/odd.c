#include <stdio.h>

int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if (a%2 == 1){
		printf("The number is odd");
	}else{
		printf("The number is even");
	}
}
