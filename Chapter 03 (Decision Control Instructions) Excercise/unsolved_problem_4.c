
#include <stdio.h>
#include <math.h>
int main()
{
    float num;

    printf("Enter a Number: ");
    scanf("%f", &num);

    num = abs(num);
    printf("abs value of num: %f", num);
    return 0;
}
