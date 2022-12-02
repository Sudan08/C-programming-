# include <stdio.h>

void even_odd(int a);

int main(){
	int a;
	scanf("%d",&a);
	even_odd(a);
}

void even_odd(int a){
	if (a%2 == 0){
		printf("Even");
	}else{
		printf("Odd");
	}
}
