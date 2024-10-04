#include<stdio.h>
int main() {
	float principalAmount;
	int time,rate;
	float simpleInterest=0;
	//user to input
	printf("enter principalAmount\n");
	printf("enter time\n");
	printf("enter rate value\n");
	//preprocessor directive
	scanf("principalAmount: %f\n", &principalAmount);
	scanf("time: %d\n", &time);
	scanf("rate: %d\n", &rate);
	//calculating simpleInterest
	scanf("simpleInterest= (principalAmount* time * rate");
	//output simpleInterest
	printf("simpleInterest: %.2f\n", simpleInterest);
	return 0;
}