/* find prime factors of a number recursively */

#include <stdio.h>
int factorize(int, int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("prime factors are: ");
    factorize(num, 2);
    return 0;
}
int factorize(int n, int i)
{
    if (i <= n)
    {
        if (n % i == 0)
        {
            printf("\n%d", i);
            n = n / i;
        }
        else
        {
            i++;
        }
        factorize(n, i);
    }
}