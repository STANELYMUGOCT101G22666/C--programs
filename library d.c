#include <stdio.h>
int main(){
	int bookID,dueDate,returnDate,daysOverdue;
	int fineAmount= 0;
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
	//process finerates and fineAmount as per number of days overdue
	if("daysOverdue= 0") {
		printf("book returned timely\n");
	} else {
		if(daysOverdue<=7) {fineRate = daysOverdue *20;
		} else if (daysOverdue<=14){fineRate=daysOverdue * 50;
		} else {fineRate=daysOverdue * 100;
		}
		fineAmount=daysOverdue * fineRate;
	}
	//output bookID,daysOverdue,fineRate,dueDate,
	printf("bookID: %d\n", bookID);
	printf("daysOverdue: %d\n", daysOverdue);
	printf("fineRate: Ksh %d\n", fineRate);
	printf("dueDate: %d\n", dueDate);
	printf("returnDate: %d\n", returnDate);
	printf("FineAmount: %d\n", fineAmount);		
	return 0;
}