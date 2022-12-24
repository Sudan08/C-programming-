#include <stdio.h>

struct employee{
    char name[20];
    int salary;
    int workHour;
};


void main(){
    struct employee emp[5];
    int i;
    for (i=0;i<5;i++){
    printf("\nFor %d employee",i+1);
    printf("\nName : ");
    scanf("%s", &emp[i].name);
    printf("\nHours :");
    scanf("%d",&emp[i].workHour);
    int hour = emp[i].workHour;
    if (hour <= 8){
        emp[i].salary = 50;
    }else if (hour >8 && hour < 12){
        emp[i].salary = 100;
    }else{
        emp[i].salary = 150;
    }
    }
    for (i = 0 ; i<5;i++){
        printf("\nName : $ %s",emp[i].name);
        printf("\nSalary : $ %d ", emp[i].salary);
    }
}
