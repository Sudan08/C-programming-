# include <stdio.h>

void main(){
	int a , b ;
	int *c = &a;
	int *d = &b ;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	if(*c > *d){
		printf("%d is greater %d",*c,*d);
	}else{
		printf("%d is greater %d",*d,*c);
	}
}
