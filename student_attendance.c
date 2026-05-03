#include <stdio.h>
#include <string.h>
struct student{
	int roll;
	char name[20];
	int present;
};
struct student s[20];
int count=0;
void addstu(){
	printf("Enter rollno:");
	scanf("%d",&s[count].roll);
	printf("Enter student name:");
	fflush(stdin);
	gets(s[count].name);
	s[count].present=0;
count++;
printf("Student added successfully");
}
void markatt(){
	int roll,i,found=0;
	printf("Enter roll:");
	scanf("%d",&roll);
	for(i=0;i<count;i++){
		if(s[i].roll==roll){
			printf("Enter present or absent:");
			scanf("%d",&s[i].present);
			printf("Attendance updated");
			found=1;
			break;
		}
	}
	if(!found)
	printf("student not found");
}
void disatt(){
	int i;
	if(count==0){
		printf("No students found");
	}
	for(i=0;i<count;i++){
	printf("%d\t%s\t%s",s[i].roll,s[i].name,s[i].present?"present":"absent");
}
}
int main(){
	int choice;
	do{
		printf("1.Add student\n");
		printf("2.Mark attendance\n");
		printf("3.Display attendance\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addstu();
				break;
			case 2:
			 markatt();
			 break;
			 case 3:
			 disatt();
			 break;
			 default:
			 printf("Invalid Choice");	
		}
	}while(choice!=3);
	return 0;
}
