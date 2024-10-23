/* Author: STANELY KARIUKI MUGO
   Date:   10/23/2024
   RegNo:  CT101/G/22666
   Title: introduction to C Programming */
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
int main() {
//the structure variables
strcpy(book.title, "Introduction to C Programming");
strcpy(book.author, "John Smith");
book.publicationYear=2022;
strcpy(book.ISBN, "9780131103627");
book.price=49.99;
//preprocessor directive
printf("title: %s\n", book.title);
printf("author: %s\n", book.author);
printf("publicationYear: %d\n", book.publicationYear);
printf("ISBN: %s\n", book.ISBN);
printf("price: %.2f\n\a", book.price);
return 0;
}
