# include <stdio.h>

int main(){
	int i ,j , size;
	char day[7][10];
	for (i = 0 ; i<7;i++){
		printf("Enter a week day :");
		scanf("%s",day[i]);
	}
	for (j=0 ; j<7; j++){
		printf("%s",day[j]);
	}

}

 
