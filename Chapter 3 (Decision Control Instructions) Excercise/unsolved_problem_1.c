#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5;
    long int rev, num, enteredNum;
    printf("Enter five digit number: ");
    scanf("%d", &num);

    enteredNum = num;

    n1 = num % 10;
    num = num / 10;

    n2 = num % 10;
    num = num / 10;

    n3 = num % 10;
    num = num / 10;

    n4 = num % 10;
    num = num / 10;

    n5 = num % 10;

    rev = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5;
    printf("Reverse number is: %ld\n", rev);
    printf("Enter number: %ld\n", num);

    printf("rev number is: %ld\n", rev);

    if (rev == enteredNum)
    {
        printf("Enter number equal to reverse number: %ld\n");
    }

    else
    {
        printf("Enter number not equal to reverse number: %ld\n");
    }

    return 0;
}
