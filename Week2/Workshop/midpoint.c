#include <stdio.h>

void  getMidPoint(int , int , int , int);

void main(){
	int x1,x2,y1,y2;
	printf("Enter X-coordinates : ");
	scanf("%d %d",&x1,&x2);
	printf("Enter Y-coordinate : ");
	scanf("%d %d",&y1,&y2);
	getMidPoint(x1,x2,y1,y2);
}

void getMidPoint(int x1, int x2, int y1, int y2){
	float xMid , yMid;
	xMid = (float)(x1+x2)/2;  
	yMid = (float)(y1+y2)/2;
	printf("The mid points are : %.1f , %.1f",xMid,yMid);
}
