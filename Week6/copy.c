#include <stdio.h>

#include <stdlib.h>


void main()
{

FILE *fptr , *fptr1;

char ch;

char filename[]= "employee.txt";

char filename1[] = "newemployee.txt";

fptr = fopen(filename,"r");

fptr1 = fopen(filename1,"w");



if (fptr == NULL) {

printf("Error creating file %s\n", filename);

exit(-1);

}

if (fptr1 == NULL) {

printf("Error creating file %s\n", filename1);

exit(-1);

}

else {

ch = fgetc(fptr);
int i;
while (ch != EOF){
	fputc(ch,fptr1);
	ch = fgetc(fptr);
}
	

}

fclose(fptr);
fclose(fptr1);
}
