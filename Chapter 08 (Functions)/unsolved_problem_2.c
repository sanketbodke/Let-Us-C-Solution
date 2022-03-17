/*
A positive integer is entered through the keyboard write a function
to obtain the prime factor of this number.

For example prime factors of 24 are 2,2,2 and 3, whereas prime factor 
of 35 are 5 and 7.
*/

#include<stdio.h>
int prime_factor(int);
int main()
{
    int enter_num;
    printf("Enter a positive integer: ");
    scanf("%d",&enter_num);
    prime_factor(enter_num);
    return 0;
}
int prime_factor(int enter_num)
{
    int count;
    for(count = 2;enter_num > 1;count++)
    {
        while (enter_num % count == 0)
        {
            printf("%d ",count);
            enter_num = enter_num / count;
        }
    }
}