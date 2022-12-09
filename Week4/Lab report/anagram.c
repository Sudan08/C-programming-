# include <stdio.h>
# include <ctype.h>


void main(){
	char arr1[20],arr2[20],i,j,flag=0,size;
	printf("Enter a word : ");
	scanf("%s",&arr1);
	printf("Enter another word : ");
	scanf("%s",&arr2);
	
	for( i = 0; i< 20 ; i++){
		if((int)arr1[i] == 0){
			size = i;
			break;
		}
		for ( j = 0 ; j < 20 ; j++){
			if((int)arr2[i]==0){
				break;
			}
			if(arr1[i] == arr2[j]){
				flag+=1;
			}
		}
	}
	if(flag == size){
		printf("Anagram");
	}else{
		printf("Not Anagram");
	}
	
	
	
}
