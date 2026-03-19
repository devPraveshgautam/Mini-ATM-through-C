#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
int main() {
	int balance = 12345,withdrawAmount,depositeAmount;
	char userInput;
	bool entrance = true;
	printf("------Pravesh Bank and Co.------\n\n");
	while(entrance) {
		printf("\n");
		printf("current balnce: %d\n",balance);
		printf("enter w for withdraw, d for deposite, e for exit: ");
		scanf(" %c",&userInput);
		userInput = tolower(userInput);
		if(userInput == 'w') {
			printf("Enter the amount for withdraw: ");
			scanf("%d",&withdrawAmount);
			balance -= withdrawAmount;
		}else if(userInput == 'd') {
			printf("Enter the amount for deposite: ");
			scanf("%d", &depositeAmount);
			balance += depositeAmount;
		}else if(userInput == 'e') {
			printf("Exited");
			entrance = false;
			break;
		} else {
			printf("invalid input\n\n");
		}
	}
	return 0;
	
}
