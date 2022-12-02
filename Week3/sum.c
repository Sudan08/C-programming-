# include <stdio.h>


void sum(int *num);
int main(){
	int num[10],i;
	for (i=0;i<10;++i){
		printf("Enter number");
		scanf("%d",&num[i]);
	}
	sum(&num);
	
}
 
void sum (int *num){ 
	int j , add =0;
	for (j=0;j<10;j++){
		add = add + num[j];
	}
	printf("%d",add);
}
