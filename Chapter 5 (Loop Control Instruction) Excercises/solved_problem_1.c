/* Determine overtime pay of 10 employees */

#include<stdio.h>
int main()
{
    float overtimepay;
    int hour, i = 1;
    while (i <= 10) /* loop for 10 employees */
    {
        printf("Enter no. of hours worked ");
        scanf("%d", &hour);
        if (hour >= 40)
        {
            overtimepay = (hour - 40) * 12;
        }
        else
        {
            overtimepay = 0;
        }
        printf("Hours: %d\n Overtime Pay = Rs: %f\n", hour,overtimepay);
        i = i + 1;
    }
    return 0;
}

