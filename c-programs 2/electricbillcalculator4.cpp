#include<stdio.h>
int main() {
	int customerID,unitsConsumed;
	char customerName;
	float chargePerunit,totalBill,surCharge;
	//user input interface
	printf("enter customerID \n");
	printf("enter customerName \n");
	printf("enter unitsCunsumed \n");
	//preprocessor directive
	scanf("customerID: %d \n", &customerID);
	scanf("customerName: %c \n", &customerName);
	scanf("unitsConsumed: %d\n", &unitsConsumed);
	//checking on chargeperunit
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
//to calculate totalBill and surCharge
totalBill=unitsConsumed*chargePerunit;
if("totalBill>400") {
	surCharge=(totalBill*15/100);
}
//check on level of total bill
if("totalBill<100"){
	printf("error as bill is too minimal");
}
return 0;
}