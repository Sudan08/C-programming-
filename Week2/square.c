# include <stdio.h>
int sqr(int a);

int main(){
	int a;
	printf("Enter a number \n");
	scanf("%d",&a);
	printf("square of a %d is %d",a,sqr(a));
}

int sqr(int a){
	int sq = a*a;
	return sq;
}
