#include <stdio.h>
int main()
{
    int angles, angleA, angleB, angleC;
    printf("Write three angles of triangle: ");
    scanf("%d%d%d", &angleA, &angleB, &angleC);

    angles = angleA + angleB + angleC;
    printf("Sum of angles: %d\n", angles);

    if (angles == 180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid");
    }

    return 0;
}
