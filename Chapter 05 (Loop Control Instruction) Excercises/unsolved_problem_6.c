/* Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list. */

#include <stdio.h>
int main()
{
    int set_of_num, loop = 0, enter_number, min_number, max_number, difference;
    printf("How many numbers in set: ");
    scanf("%d", &set_of_num);

    while (loop < set_of_num)
    {
        printf("Enter Number: ");
        scanf("%d", &enter_number);

        if (loop == 0)
        {
            max_number = enter_number;
            min_number = enter_number;
        }
        if (enter_number > max_number)
        {
            max_number = enter_number;
        }
        if (enter_number < min_number)
        {
            enter_number = min_number;
        }
        loop++;
    }
    difference = max_number - min_number;
    printf("Difference bettewen max and min number is: %d\n", difference);
    return 0;
}
