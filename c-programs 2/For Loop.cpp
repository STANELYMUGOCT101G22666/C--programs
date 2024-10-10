//for loop- output numbers 1-30
#include<stdio.h>
int main() {
	int i,firstValue,lastValue,sum=0;
	//user to enter values
	printf("enter firstValue\n");
	printf("enter lastValue\n");
	//preprocessor directive
	scanf("firstValue: %d\n", &firstValue);
	scanf("lastValue: %d\n", &lastValue);
	for(i=firstValue;i>=lastValue;i--){
		printf("%d\n", i);
		sum=sum + i;
	}
	printf("sumis: %d\n", sum);
return 0;
}