// Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form:
/* 29 * 1 = 29
   29 * 2 = 58
   …
*/ 

#include<stdio.h>
int main()
{
    int loop,enter_num;
    printf("\nEnter a Number: ");
    scanf("%d",&enter_num);
    for(loop = 1;loop <= 10; loop++)
    {
        printf("\n%d * %d = %d",enter_num,loop,enter_num * loop);
    }
    return 0;
}