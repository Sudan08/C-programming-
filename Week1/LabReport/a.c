#include <stdio.h>
double add(double , double );
double sub(double , double );
double mul(double , double );
double div(double , double );
double mod(double , double );

int main(){
	char op;
	double result;
	double a,b;
	printf("Enter a operator (+,-,*,/,%)"); 
	scanf("%c",&op);
	printf("Enter two number");
	scanf("%lf %lf",&a,&b);
	switch(op){
		case '+':
			result = add(a,b);
			printf("The sum is: %d",result);
		case '-':
			result = sub(a,b);
			printf("The sub is: %d",result);
		case '*':
			result = mul(a,b);
			printf("The sub is: %d",result);
		case '/':
			result = div(a,b);
			printf("The sub is: %d",result);
		case '%':
			result = mod(a,b);
			printf("The sub is: %d",result);	
		default:
			printf("no operator");		
	}
	int con;
	printf("Do you wanna continue? 1(yes) or 0(false) : ");
	scanf("%d",&con);

	while(con == 1){
		double c;
		printf("Enter a operator (+,-,*,/,%)"); 
		scanf("%c",&op);
		printf("Enter a number to %c to %d",op,result);
		scanf("%lf",&c);
		switch(op){
		case '+':
			result = add(result,c);
			printf("The sum is: %d",result);
		case '-':
			result = sub(result,c);
			printf("The sub is: %d",result);
		case '*':
			result = mul(result,c);
			printf("The sub is: %d",result);
		case '/':
			result = div(result,c);
			printf("The sub is: %d",result);
		case '%':
			result = mod(result,c);
			printf("The sub is: %d",result);	
		default:
			printf("no operator");		
	}
	}
	else{
		printf("Thank you");
	}
	
	
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
double mod(double a , double b){
	return (int)a%(int)b;
}
