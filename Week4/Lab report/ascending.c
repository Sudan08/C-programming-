# include <stdio.h>
void main(){
	int arr[10] = {1,5,4,6,3,7,9,7,6,5};
	int i , j , a,size = 10;
	for (i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]>=arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	
	for (i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
}
