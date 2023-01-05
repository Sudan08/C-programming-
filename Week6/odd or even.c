#include <stdio.h>

#include <stdlib.h>


void main()
{
int number;
FILE *fptr , *fptr1;



char odd[]= "odd.txt";

char even[] = "even.txt";

fptr = fopen(odd,"w");

fptr1 = fopen(even,"w");



if (fptr == NULL) {

printf("Error creating file %s\n", odd);

exit(-1);

}

if (fptr1 == NULL) {

printf("Error creating file %s\n", even);

exit(-1);

}

else {

int  j=0;
while(j == 0){
	printf("Enter a number : \n");
	scanf("%d",&number);
	if (number%2 == 0){
		fprintf(fptr1,"%d",number);
	}else{
		fprintf(fptr,"%d",number);
	}
	printf("Done? (i) 1 (ii) 0 \n");
	scanf("%d",&j);
}

}

fclose(fptr);
fclose(fptr1);
}
