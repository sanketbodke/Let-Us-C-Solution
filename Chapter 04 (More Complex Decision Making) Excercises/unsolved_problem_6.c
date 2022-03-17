/* Write a program using conditional operators to determine
whether a year entered through the keyboard is a leap year or
not. */

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    year % 400 == 0 && year % 100 == 0 || year % 100 != 0 && year % 4 == 0 ? printf("Leap Year\n") : printf("Not a leap year\n");
    return 0;
}