/* A 5 digit positive integer input through the keyboard, write a recursive function to calculate
the sum of digits of the 5-digit number. */

#include<stdio.h>
int rsum(int);
int main()
{
    int num,sum;
    int n;
    printf("Enter number: ");
    scanf("%d",&num);
    sum = rsum(num);
    printf("Sum of digits is : %d\n",sum);
    return 0;
}
int rsum(int n)
{
    int s,remainder;
    if(n!=0)
    {
        remainder = n % 10;
        s = remainder + rsum(n/10);
        printf("%d\n",s);
    }
    else{
        return 0;
    }
    return s;
}