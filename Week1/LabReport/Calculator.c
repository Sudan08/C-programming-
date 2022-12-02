#include <stdio.h>
double add(double a , double b);
double sub(double a , double b);
double mul(double a , double b);
double div(double a , double b);
int mod(int a , int b);

int main(){
	char op;
	double result;
	double a,b;
	printf("Enter a operator (+,-,*,/,%%)"); 
	scanf("%c",&op);
	printf("Enter two number");
	scanf("%lf %lf",&a,&b);
	switch(op){
		case '+':
			result = add(a,b);
			printf("The sum is: %lf",result);
			break;
		case '-':
			result = sub(a,b);
			printf("The sub is: %lf",result);
			break;
		case '*':
			result = mul(a,b);
			printf("The mul is: %lf",result);
			break;
		case '/':
			result = div(a,b);
			printf("The div is: %lf",result);
			break;
		case '%':
			printf("%lf",a);
			int c=(int) a;
			printf("%d",c);
			int d=(int) b;
			result=mod(c,d);
			printf("The mod is: %d",result);
			break;
		default:
			printf("no operator");		
	}
	int con;
	printf("Do you wanna continue? 1(yes) or 0(false) : ");
	scanf("%d",&con);

	if (con == 1){
		double c;
		printf("Enter a operator (+,-,*,/,%)"); 
		scanf("%c",&op);
		printf("Enter a number to %c to %lf",op,result);
		scanf("%lf",&c);
		switch(op){
		case '+':
			result = add(result,c);
			printf("The sum is: %lf",result);
			break;
		case '-':
			result = sub(result,c);
			printf("The sub is: %lf",result);
			break;
		case '*':
			result = mul(result,c);
			printf("The mul is: %lf",result);
			break;
		case '/':
			result = div(result,c);
			printf("The div is: %lf",result);
			break;
		case '%':
			mod(result,c);
			break;	
		default:
			printf("no operator");		
	}
	}
	else{
		printf("Thank you");
	}
	return 0;
	
	
}

double add(double a,double b){
	return a+b;
}

double sub(double a,double b){
	return a-b;
}
double mul(double a, double b){
	return a*b;	
}
double div(double a, double b){
	return a/b;
}
int mod(int c , int d){
	printf("The mod is : %d",c%d);
	return 0;
}
