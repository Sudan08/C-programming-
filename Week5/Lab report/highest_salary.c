#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[20];
    int salary;
    int workHour;
};

void highest(struct Employee* emp,int n){
    int i,a;
    int greatest = 0;
    for (i=0;i<n;i++){
        if (emp[i].salary>=greatest){
            greatest = emp[i].salary;
            a=i;
        }  
    }
    printf("the highest salary is %d of %s",greatest , emp[a].name);
}

void main(){
    struct Employee emp;
    int n ,i;
    printf("Enter number of employee:");
    scanf("\n %d",&n);
    
    struct Employee* empl  = (struct Employee*)calloc(n,sizeof(emp));
    
    for (i=0;i<n;i++){
    printf("\nFor %d employee",i+1);
    printf("\nName : ");
    scanf("%s",empl[i].name);
    printf("\nSalary : ");
    scanf("%d",&empl[i].salary);
    printf("\nHours :");
    scanf("%d",&empl[i].workHour);
    }
    
    highest(empl,n);
    
}
