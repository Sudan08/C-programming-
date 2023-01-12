# include <stdio.h>
# include <stdlib.h>
#include <string.h>

struct Employee {
	char name[20];
	char post[20];
	int salary;
};

struct Employee* new_list(struct Employee emp[3],int count){

	struct Employee *list = calloc(count,sizeof(struct Employee));
	int i , j=0;
	for (i = 0;i < count;i++){
		if (emp[i].salary > 10000)
        {
            strcpy(list[j].name, emp[i].name);
            strcpy(list[j].post, emp[i].post);
            list[j].salary = emp[i].salary;
            j++;
        }
	}
	return list;
}

void main(){
	int i;
	struct Employee emp[3];
	struct Employee *list=calloc(5,sizeof(struct Employee));
	for (i=0;i<3;i++){
		printf("Enter emp_data for %d:", i + 1);
        printf("\nName: ");
        scanf("%s", &emp[i].name);
        printf("Post: ");
        scanf("%s", &emp[i].post);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
	}
	int count = 0;
	for(i=0;i<3;i++){
		if(emp[i].salary > 10000){
			count += 1; 
		}
	}
	
	list = new_list(emp,count);
	printf("Employees with salary of more than 10000:\n");
    for (i = 0; i < count; i++)
    {
        printf("Name: %s\n", list[i].name);
        printf("Post: %s\n", list[i].post);
        printf("Salary: %d\n", list[i].salary);
    }
	free(list);
}


