#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp,&sp);

    p = sp - cp;
    l = cp - sp;

    if (p > 0)
    {
        printf("Seller made profit of Rs: %f\n", p);
    }

    if (l > 0)
    {
        printf("Seller made loss of Rs: %f\n", l);
    }

    if (p == 0)
    {
        printf("There is no loss,no profit\n");
    }

    return 0;
    
}