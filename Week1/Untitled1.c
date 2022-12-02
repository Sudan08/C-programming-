#include <stdio.h>



int main(){
	float p,t,r;
	printf("Enter the principle :");
	scanf("%f",&p);
	printf("Enter the time :");
	scanf("%f",&t);
	printf("Enter the rate :");
	scanf("%f",&r);
	float st = (p*t*r)/100;
	printf("The simple interest is : %f",st);
	return 0;
}
