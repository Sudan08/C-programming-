#include <stdio.h>

struct Student{
    int rollNo;
    int marks;
    struct student_info{
        char name[20];
        int age;
        char dateOfBirth[20];
    }std_info;
};

void main(){
    struct Student std[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter roll no, marks and std info for student %d",i+1);
        printf("\nRoll no:");
        scanf("%d",&std[i].rollNo);
        printf("\nMarks:");
        scanf("%d",&std[i].marks);
        printf("\nName:");
        scanf("%s",&std[i].std_info.name);
        printf("\nAge:");
        scanf("%d",&std[i].std_info.age);
        printf("\nDOB:");
        scanf("%s",&std[i].std_info.dateOfBirth);
    } 
    for (i= 0 ; i<3;i++){
        printf("\nFor %d student ", i+1);
        printf("\nRoll no: %d",std[i].rollNo);
        printf("\nMarks: %d",std[i].marks);
        printf("\nName: %s", std[i].std_info.name);
        printf("\nAge: %d",std[i].std_info.age);
        printf("\nDOB: %s",std[i].std_info.dateOfBirth);
    }
 
}
