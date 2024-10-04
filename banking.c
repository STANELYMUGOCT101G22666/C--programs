#include<stdio.h>
int main(){
	int age;
	float income;
	//user to input
	printf("enter age\n");
	printf("enter annual income\n");
	//preprocessor directive
	scanf("age: %d\n", &age);
	scanf("income: %f\n", &income);
	//checking if user qualifies for a loan
	if(age >= 21 && income >= 21000){
		printf("congratulations you qualify for a loan.\n");
	} else {
		printf("unfortunately, we are unable to offer you a loan at this time.\n");
           }	
	return 0;
}