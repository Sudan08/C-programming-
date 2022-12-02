#include <stdio.h>

int main(){
	int a;
	printf("Choose your converter \n 1.Celcuis 2.Farenheit");
	scanf("%d",&a);
	if (a == 1){
		float c;
		printf("Enter temp in Celcius");
		scanf("%f",&c);
		float f = (c * 9/5) + 32 ;
		printf("The temp in faranheit is %f",f);
	}else if(a ==2){
		float f;
		printf("Enter temp in Farenheit");
		scanf("%f",&f);
		float c = (f - 32) * (5/9);
		printf("The temp in celcius is %f",c);
	}else{
		printf("Error in input");
	}
}
