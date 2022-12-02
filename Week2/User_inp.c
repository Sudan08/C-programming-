#include <stdio.h>

int user_inp(int a, int b);

int main (){
	printf("%d", user_inp(5,7));
}

int user_inp(int a, int b){
	printf("Enter two numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	return a,b ;
}
