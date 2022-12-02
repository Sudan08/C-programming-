# include <stdio.h>

int swap(int a , int b);

int main(){
	int a,b;
	printf("Enter two numbers \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Before %d , %d",a,b);
	swap(a,b);
	
}

int swap(int a , int b){
	int value = a;
	a = b ;
	b = value;
	printf("\n After %d ,%d",a,b);
	return 0;
}
