#include <stdio.h>

void getGreatest(int ,int);

void main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	getGreatest(a,b);
}

void getGreatest(int a, int b){
	if(a>b){
		printf("%d is greatest",a);
	}else if (b>a){
		printf("%d is greatest",b);
	}else{
		printf("They are equal");
	}
}
