#include <stdio.h>
int main(){
	int bookID,dueDate,returnDate,daysOverdue;
	int fineRate=0;
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
	//fine rates as per number of days overdue
	if("daysOverdue= 0") {
		printf("book returned timely,no fine\n");
	} else {
		if(daysOverdue<=7) { fineRate= daysOverdue *20;
		} else if (daysOverdue<=14){fineRate=daysOverdue * 50;
		} else {fineRate=daysOverdue * 100;
		};
		return 0;
	}
	//output fineRate
	printf("bookID: %d\n", bookID);
	printf("daysOverdue: %d\n", daysOverdue);
	printf("fineRate: %d\n", fineRate);		
	return 0;
}