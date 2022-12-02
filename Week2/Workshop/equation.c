#include <stdio.h>


void equation(float , float ,float ,float , float,float);

void main(){
	float a,b,c,d,e,f;
	printf("Enter values of a,b,c,d,e,f : \n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	equation(a,b,c,d,e,f);
}

void equation(float a, float b, float c , float d, float e, float f){
	float x,y;
	y= (a*f-c*d)/(a*e+d*b);
	x= (f-e*y)/d;
	printf("The value of x and y is : %f %f",x,y);
	
}


