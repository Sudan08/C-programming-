# include <stdio.h>
# include <math.h>

void velocityCalc(float , float , float ,float t);
void main(){
	float v,u,a,t;
	v=9.8;
	u=NAN;
	t= 1.5;
	a = 10;
	velocityCalc(v,u,a,t);
}

void velocityCalc(float v, float u, float a , float t){
	if(isnan(v)){
		v= u+(a*t);
		printf("The final velocity is : %f",v);
	}
	else if (isnan(u)){
		u = v - (a*t;
		printf("The initial velocity is : %f",u);
	}
	else if (isnan(a)){
		a = (v-u)/t;
		printf("The acceleration is : %f",a);
	}
	else{
		t = (v-u)/a;
		printf("The time is : %f",u);
	}
	
}


