# include <stdio.h>


struct Student{
	char name[20];
	int rollno;
	float marks;
}; 

void read();
void display();


void main(){
	struct Student s[10];
	
	read(s);
	display(s);	
}

void read(struct Student s[10]){
	int i;
	for (i=0;i<10;i++){
		printf("Enter name:");
		scanf("%s",&s[i].name);
		printf("Enter roll no:");
		scanf("%d",&s[i].rollno);
		printf("Enter marks:");
		scanf("%f",&s[i].marks);
	}
	
}

void display(struct Student s[10]){
	int i;
	for (i=0;i<10;i++){
		printf("\n Name: %s",s[i].name);
		printf("\n roll no: %d",s[i].rollno);
		printf("\n marks: %f",s[i].marks);
	}
}


