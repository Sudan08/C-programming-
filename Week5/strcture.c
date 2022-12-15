#include <stdio.h>
//
//struct student{
//	char name[20];
//	int age;
//	float gpa;
//	char gender[10];
//};
//
//
//void main(){
//	int i=5;
//	struct student s1[i];
//	 
//	for(i=0;i<5;i++){
//	
//	printf("Enter name , age , gpa , gender \n");
//	scanf("%s",&s1[i].name);
//	scanf("%d",&s1[i].age);
//	scanf("%f",&s1[i].gpa);
//	scanf("%s",&s1[i].gender);
//	
//	}
//	
//	
//	for (i=0;i<5;i++){
//	
//	printf("\nName : %s",s1[i].name);
//	printf("\nAge : %d",s1[i].age);
//	printf("\nGPA : %f",s1[i].gpa);
//	printf("\ngender : %s",s1[i].gender);
//	}
//}


struct student{
	char name[20];
	int age;
	float gpa;
	char gender[10];
	int *ptr;
};

void main(){
	struct student s1;
	struct student *address = &s1;
	s1.ptr = &s1.age;
	printf("Enter name , age , gpa , gender \n");
	scanf("%s",address -> name);
	scanf("%d",&address-> age);
	scanf("%f",&address-> ptr);
	scanf("%s",address-> gender);
	
	printf("\nName : %s",address->name);
	printf("\nAge : %d",address->age);
//	printf("\nGPA : %f",address->gpa);
	printf("\ngender : %s",address->gender);
}


