# include <stdio.h>

void main(){
	int i , sum = 0, arrlength;
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	arrlength = sizeof(arr)/sizeof(arr[0]);
	
	for (i=0;i<arrlength;i++){
		if(arr[i] % 7 == 0 && arr[i]%2 != 0 && arr[i]%3 !=0){
			sum = sum + arr[i];
	}
	}
	printf("sum is: %d",sum);
}
