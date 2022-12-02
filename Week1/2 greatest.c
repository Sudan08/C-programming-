#include <stdio.h>

int main(){
	int a , b ;
	printf("Enter the first number");
	scanf ("%d",&a);
	printf("Enter the second number");
	scanf ("%d",&b);
	if (a>b){
		printf("The %d a is greater than %d b",a,b);
	}else if(b>a){
		printf("The %d b is greater than %d b",b,a);
	}else{
		printf("They are equal");
	}
}
