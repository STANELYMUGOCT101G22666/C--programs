/* Author: STANELY KARIUKI
   Date:   10/23/2024
   RegNo:  CT101/G/22666
   Title: Introduction to C Programming */
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