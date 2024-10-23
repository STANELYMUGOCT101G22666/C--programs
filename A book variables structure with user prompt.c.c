/* Author: STANELY KARIUKI MUGO
   Date:   10/23/2024
   RegNo:  CT101/G/22666
   Title:  Introduction to C Programming */
#include<stdio.h>
#include<string.h>
struct book
{
	char title[30];
	char author [30];
	int publicationYear;
	char ISBN [13];
	float price;
} book;
int main(){
	//user to input values
printf("enter book title :");
scanf("%s",book.title);
printf("enter book author name:");
scanf("%s", &book.author);
printf("enter book publication Year:");
scanf("%d", &book.publicationYear);
printf("enter book ISBN No:");
scanf("%s", &book.ISBN);
printf("enter book price:");
scanf("%f", &book.price);
//preproccessor directive
printf("title: %s\n", book.title);
printf("author: %s\n", book.author);
printf("publicationYear: %d\n", book.publicationYear);
printf("ISBN: %s\n", book.ISBN);
printf("price: %.2f\n\a", book.price);
return 0;
}