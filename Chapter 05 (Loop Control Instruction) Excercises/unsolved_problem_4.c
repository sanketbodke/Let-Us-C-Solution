/* Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.*/

#include<stdio.h>
int main()
{
    int number,positive=0,negative=0,zero=0;
    int enter_number_loop;
    while (enter_number_loop>=0)
    {
        printf("Enter Number: ");
        scanf("%d",&number);
        enter_number_loop++;
        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        printf("Positive Number Count: %d\n",positive);
        printf("Negative Number Count: %d\n",negative);
        printf("Zero Number Count: %d\n",zero);
    }
    return 0;
}