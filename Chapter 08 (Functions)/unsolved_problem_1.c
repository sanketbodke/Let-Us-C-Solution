/* Any year is entered through the keyboard. Write a function to 
   determine whether the year is a leap year or not. */

#include<stdio.h>
int year(int);
int main()
{
    int enter_year;
    printf("Enter a year: ");
    scanf("%d",&enter_year);
    year(enter_year);
    return 0;
} 
int year(int enter_year)
{
    if (enter_year % 400 == 0 && enter_year % 100 == 0)
    {
        printf("Year is leap year\n");
    }
    else if (enter_year % 4 == 0 && enter_year % 100 != 0)
    {
        printf("Year is leap year\n");
    }
    else
    {
        printf("Year is not leap year\n");
    }  
} 