#include <stdio.h>
int main(){
	int bookID,dueDate,returnDate,daysOverdue;
	//user to input
	printf("enter bookId \n");
	printf("enter dueDate \n");
	printf("enter returnDate \n");
	//preprocessor directive
	scanf("bookID: %d\n", &bookID);
	scanf("dueDate: %d\n", &dueDate);
	scanf("returnDate: %d\n", &returnDate);
	//to calculate days overdue
	daysOverdue=returnDate-dueDate;
	//processing daysOverdue
	if(daysOverdue>0) {
		printf("daysOverdue: %d\n", daysOverdue);
		} else {
	    printf("book returned timely\n");
	}
	return 0;
}