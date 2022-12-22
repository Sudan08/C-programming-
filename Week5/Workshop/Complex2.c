# include <stdio.h>


struct Complex {
	int x;
	int y;
};


void sum(struct Complex c1,struct Complex c2,struct Complex c3);



void main(){
	struct Complex c1,c2 ,c3;
		
	printf("Enter number for c1 : ");
	scanf("%d%d",&(c1.x),&(c1.y));
	
	printf("Enter number for c2 : ");
	scanf("%d%d",&(c2.x),&(c2.y));
	
	sum(c1,c2,c3);
	
	
	
}	

void sum(struct Complex c1,struct Complex c2,struct Complex c3){
	c3.x = c1.x + c2.x ;
	c3.y= c1.y + c2.y; 
	printf("The third complex number is : %d + i %d",c3.x , c3.y);
}
