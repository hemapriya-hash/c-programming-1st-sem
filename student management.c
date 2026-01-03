#include <stdio.h>
//student record management system
int main(){
	struct student{
		int roll;
		char name[20];
		float marks;
	};
	struct student s[20];
	int i,n,search;
	printf("Enter how many students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter roll no:");scanf("%d",&s[i].roll);
		printf("\nEnter name:");fflush(stdin);gets(s[i].name);
		printf("\nEnter marks:");scanf("%f",&s[i].marks);
	}
	for(i=0;i<n;i++){
		printf("\nStudent roll no is %d",s[i].roll);
		printf("\nStudent name is %s",s[i].name);
		printf("\nStudent marks are %.2f",s[i].marks);
	}
	printf("\nEnter search roll:");
	scanf("%d",&search);
	for(i=0;i<n;i++){
	if(s[i].roll==search){
		printf("\nStudent roll no is %d",s[i].roll);
		printf("\nStudent name is %s",s[i].name);
		printf("\nStudent marks are %.2f",s[i].marks);
	}
}
return 0;
}
