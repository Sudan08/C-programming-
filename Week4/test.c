# include <stdio.h>

void main(){
	int x = 5;
	int *a;
	*a = &x;
	printf("%d \n",a);
	printf("%d",x);
}
