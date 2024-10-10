//while loop output numbers as user prompts
#include<stdio.h>
int main() {
	int firstValue,lastValue,sum;
	//user to input the data
	printf("enter firstValue \n");
	printf("enter lastValue \n");
	//preprocessor directive
	scanf("firstValue: %d\n", &firstValue);
	scanf("lastValue: %d\n", &lastValue);
	while(firstValue<lastValue){
		printf("%d\n",firstValue);
		firstValue++;
		sum= sum+firstValue;
	}
	printf("sumis: %d", sum);
	return 0;
}