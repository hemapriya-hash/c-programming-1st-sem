#include <stdio.h>
#include <string.h>
struct Account{
	int acno;
	char name[20];
	float bal;
};
struct Account acc[50];
int count=0;
void creataccount(){
	printf("Enter Account number:");
	scanf("%d",&acc[count].acno);
	printf("Enter Account Holder:");
	fflush(stdin);
	gets(acc[count].name);
	printf("Enter initial Account Bal:");
	scanf("%f",&acc[count].bal);
	count++;
	printf("\nAccount created successfully\n");
	
}
void deposit(){
	int no,i;
	float amt;
	printf("Enter Account number:");
	scanf("%d",&no);
	for(i=0;i<count;i++){
		if(acc[i].acno==no){
			printf("Enter amount to deposit:");
			scanf("%f",&amt);
			acc[i].bal=acc[i].bal+amt;
			printf("\nAmount deposited successfully");
		}
		else{
		printf("account not found");	
		}
	}
	}
void withdraw(){
	int no,i;
	float amt;
	printf("Enter account number:");
	scanf("%d",&no);
	for(i=0;i<count;i++){
		if(acc[i].acno == no){
			printf("Enter amount to withdraw:");
			scanf("%f",&amt);
			if(amt<=acc[i].bal){
				acc[i].bal-=amt;
				printf("Amount withdrawl successfully");
			}
			else{
				printf("Amount insufficient");
			}
		}
		else{
			printf("Account not found");
		}
	}
}
void checkbalance(){
	int no,i;
	printf("Enter account number:");
	scanf("%d",&no);
	for(i=0;i<count;i++){
		if(acc[i].acno == no){
			printf("Account holder:%s",acc[i].name);
			printf("Current Balance:%.2f",acc[i].bal);
		}
		else{
			printf("Account not found");
		}
   }	
}
int main(){
	int choice;
	do{
	printf("-----Bank Account Details-----\n");
	printf("1.Creat account\n");
	printf("2.Deposit Money\n");
	printf("3.Withdraw Money\n");
	printf("4.Check balance\n");
	printf("Enter Choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			creataccount();
			break;
		case 2:
		    deposit();
			break;
		case 3:
		    withdraw();
			break;
		case 4:
		    checkbalance();
			break;
		default:
		printf("Invalid choice");
		break;				
	}
}while(choice!=4);
	return 0;
}
