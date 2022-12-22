# include <stdio.h>


struct Student{
	char name[20];
	int rollno;
	float marks;
}; 

void read();
void display();


void main(){
	struct Student s[2];
	read(s);
	display(s);	
}

void read(struct Student s[2]){
	int i;
	for (i=0;i<2;i++){
		printf("Enter name:");
		scanf("%s",&s[i].name);
		printf("Enter roll no:");
		scanf("%d",&s[i].rollno);
		printf("Enter marks:");
		scanf("%f",&s[i].marks);
	}
	return s[2];
}

void display(struct Student s[2]){
	int i;
	for (i=0;i<2;i++){
		printf("Enter name: %s",s[i].name);
		printf("Enter roll no: %d",s[i].rollno);
		printf("Enter marks: %f",s[i].marks);
	}
}


