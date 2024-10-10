#include<stdio.h>
int main() {
	int customerID,unitsConsumed;
	char customerName;
	float chargePerunit=0,totalBill=0;
	//user input interface
	printf("enter customerID \n");
	printf("enter customerName \n");
	printf("enter unitCunsumed \n");
	//preprocessor directive
	scanf("customerID: %d \n", &customerID);
	scanf("customerName: %c \n", &customerName);
	scanf("unitsConsumed: %d\n", &unitsConsumed);
	//checking on chargeperunit as per unitsconsumed
	if("unitsConsumed<=199") {
		chargePerunit = 1.20;
} else
	if("unitConsumed>=200 &&<400") {
		chargePerunit=1.50;
	} else
	if("unitsConsumed>=400 &&<600"){
	chargePerunit=1.80;
		} else 
    if("unitsConsumed>=600"){
	    chargePerunit=2.00;
	}
//to calculate totalBill
totalBill=unitsConsumed*chargePerunit;
return 0;
}