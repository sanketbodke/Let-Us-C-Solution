/* Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ). */

#include <stdio.h>
int main()
{

    int number = 1;

    while (number <= 500)
    {
        int last_digit = number % 10;      
        int remaining_digit = number / 10; 

        int second_digit = remaining_digit % 10;   
        int remaining_digit2 = remaining_digit / 10; 

        int armstrong_number = ((last_digit * last_digit * last_digit) + (second_digit * second_digit * second_digit) + (remaining_digit2 * remaining_digit2 * remaining_digit2));

        if (armstrong_number == number)
        {
            printf("%d is an Armstrong Number\n",armstrong_number);
        }
        number++;
    }
    return 0;
}