#include <stdio.h>
#include <stdlib.h>

void main(){
	int n,i;
	printf("Enter the length of the number : ");
	scanf("%d",&n);
	int *ptr = (int*)calloc(n,sizeof(int));
	
	printf("Enter %d numbers ",n);	
	
	for (i=0;i<n;i++){
		scanf("%d",ptr+i);		
	}
	
	int *greatest = ptr;
	for(i=0;i<n;i++){
		if (*(ptr+i)>*greatest){
			*greatest = *(ptr+i);
		}
	}
	printf("The greatest number from the array is : %d",*greatest);
}
