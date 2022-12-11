# include <stdio.h>

void main(){
	int i , sum = 0, arrlength;
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	arrlength = sizeof(arr)/sizeof(arr[0]);
	int count = 0 ;
	
	for (i=0;i<arrlength;i++){
		if(arr[i] % 5 == 0 && arr[i]%2 != 0 && arr[i]%3 !=0){
			sum = sum + arr[i];
			count += 1;
	}
	}
	printf("Count : %d",count);
	printf("\nsum is: %d",sum);
}
