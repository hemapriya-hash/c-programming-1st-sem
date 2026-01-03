//Simple calculator
#include <stdio.h>
int main(){
	int a,b;
	float r;
	char ch;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("\n---MENU DRIVEN---");
	printf("\n+ ADDITION");
	printf("\n- SUBTRACTION");
	printf("\n* MULTIPLICATION");
	printf("\n/ DIVISION");
	fflush(stdin);
	printf("\nEnter ch +,-,*,/:");
	scanf("%c",&ch);
	switch(ch){
		case '+':
			r=a+b;
			printf("\n Addition = %.2f",r);
			break;
		case '-':
			r=a-b;
			printf("\n Subtraction = %.2f",r);
			break;
		case '*':
			r=a*b;
			printf("\n Multiplication = %.2f",r);
			break;
		case '/':
			r=a/b;
			printf("\n Division = %.2f",r);	
			break;
		default:
		printf("\n Invalid choice");
		break;	
	}
	return 0;
}
