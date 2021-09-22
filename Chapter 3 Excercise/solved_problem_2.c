#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    
    return 0;
    
}