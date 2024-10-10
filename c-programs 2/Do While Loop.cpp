//do while
#include<stdio.h>
int main(){
	int firstValue, sum=0,lastValue;
	//user to input values
	printf("enter firstValue \n");
	printf("enter the lastValue\n");
	//preprocessor directive
	scanf("firstValue: %d\n", &firstValue);
	scanf("lastValue: %d\n", &lastValue);
	do{
    printf("%d\n", firstValue);
    firstValue++;
    sum=sum+firstValue;
	}while(firstValue<=lastValue);
	printf("the sum is %d", sum);
	return 0;
}