#include<stdio.h>
#include<math.h>//to be able to apply power function
int main() {
	double principalAmount,time,nTimes,Amount,rate;
	float principal=0;
	//user to input
	printf("enter principalAmount\n");
	printf("enter time\n");
	printf("enter rate value\n");
	printf("enter nTimes value\n");
	//preprocessor directive
	scanf("principalAmount: %lf\n", &principalAmount);
	scanf("time: %lf\n", &time);
	scanf("rate: %lf\n", &rate);
	scanf("nTimes: %lf\n", &nTimes);
	//calculating compoundInterest
	Amount= principal * pow ((1+rate), nTimes*time);
	//output finalAmount
	printf("final Amount after %.2lf years is: %.2lf\n", time,Amount);
	return 0;
}