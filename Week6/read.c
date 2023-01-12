#include <stdio.h>

#include <stdlib.h>


void main()
{

FILE *fptr;
char ch;

char filename[]= "employee.txt";


fptr = fopen(filename,"r");





if (fptr == NULL) {

printf("Error creating file %s\n", filename);

exit(-1);

}



else {

ch = fgetc(fptr);
while (ch != EOF){
	printf("%c",ch);
	ch = fgetc(fptr);
}
	

}

fclose(fptr);

}
