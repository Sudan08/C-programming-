# include <stdio.h>

void armstrong(int);
void perfectNumber(int);
int cube(int);

void main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	armstrong(num);
	perfectNumber(num);
}

void armstrong(int num){
	int a,i,sum = 0,d;
	a=num;
	while(a>0){
		d= a % 10;
		sum = sum + cube(d);
		a =a / 10 ;	
	}
	if(sum == num){
		printf("is a Armstrong number");
	}
	else{
		printf("is not a Armstrong number");
	}
}

void perfectNumber(int num){
	int i ,sum = 0 ;
	for(i = 1;i<num;i++){
		if (num % i == 0){
			sum = sum + i; 
		}
	}
	if (sum == num){
		printf("\nis a perfect number");
	}
	else{
		printf("\nis not a perfect number");
	}
}

int cube(int d){
	return d*d*d;
}
