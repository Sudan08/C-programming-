#include <stdio.h>

#include <stdlib.h>


void main()
{

FILE *fptr , *fptr1 ,* fptr2;

char ch;

char filename[]= "odd.txt";

char filename1[] = "even.txt";

char filename2[] = "numbers.txt";

fptr = fopen(filename,"r");

fptr1 = fopen(filename1,"r");

fptr2 = fopen(filename2,"w");


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
	fputc(ch,fptr2);
	ch = fgetc(fptr);
}

ch = fgetc(fptr1);
while (ch != EOF){
	fputc(ch,fptr2);
	ch = fgetc(fptr1);
}
	

}

fclose(fptr);
fclose(fptr1);
fclose(fptr2);
}
