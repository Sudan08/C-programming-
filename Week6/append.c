#include <stdio.h>

#include <stdlib.h>

struct employee {
	char empName[20];
	int age;
	int salary;
};

void main()
{

FILE *fptr;

char filename[]= "employee.txt";

fptr = fopen(filename,"a");

if (fptr == NULL) {

printf("Error creating file %s\n", filename);

exit(-1);

}

else {

struct employee emp[1];
int i;
for(i=0;i<1;i++){
	printf("enter data for employee %d",i+1);
	printf("\nName");
	scanf("%s",&emp[i].empName);
	printf("\nAge");
	scanf("%d",&emp[i].age);
	printf("\nSalary");
	scanf("%d",&emp[i].salary);
}
  
	for(i=0;i<1;i++){
	fprintf(fptr,"\nName : %s",emp[i].empName);
	fprintf(fptr,"\nAge : %d",emp[i].age);
	fprintf(fptr,"\nSalary : %d",emp[i].salary);
}
	

}

fclose(fptr);

}
