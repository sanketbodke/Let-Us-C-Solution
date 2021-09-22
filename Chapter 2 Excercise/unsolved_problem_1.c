#include<stdio.h>
int main()
{
    int num,num1,num2,num3,num4,num5;
    long int sum;
    printf("\nEnter five digit number: ");
    scanf("%d", &num);
 
    num1 = num % 10;
    num = num / 10;
 
    num2 = num % 10;
    num = num / 10;
 
    num3 = num % 10;
    num = num / 10;
 
    num4 = num % 10;
    num = num / 10;
    
    num5 = num % 10;
    sum = num1 + num2 + num3 + num4 + num5;
    printf("Sum of number: %ld\n", sum);
    return 0;  
}
