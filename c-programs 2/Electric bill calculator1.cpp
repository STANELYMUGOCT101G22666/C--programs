#include<stdio.h>
int main() {
	int customerID,unitConsumed;
	char customerName;
	//user input interface
	printf("enter customerID \n");
	printf("enter customerName \n");
	printf("enter unitCunsumed \n");
	//preprocessor directive
	scanf("customerID: %d \n", &customerID);
	scanf("customerName: %c \n", &customerName);
	scanf("unitConsumed: %d \n", &unitConsumed);
	return 0;
}
	