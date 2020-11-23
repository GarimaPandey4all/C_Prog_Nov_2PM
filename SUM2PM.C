#include<stdio.h>
#include<conio.h>

void main()
{
   //int a = 10, b = 20; // declare/create and initialize/assign
   int a, b; // declaration
   clrscr();

   //printf("Addition is: %d", (a + b)); // %d - format specifier

   printf("Enter value for a and b:");
   scanf("%d %d", &a, &b); // scanf - read user input

   //& - ampersand - address of operator

   printf("Addition is: %d", (a + b));

   getch();
}