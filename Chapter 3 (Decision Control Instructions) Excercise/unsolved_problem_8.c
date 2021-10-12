#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter a x and y coordinate: ");
    scanf("%f%f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Points lies on origin");
    }

    else
    {
        if (x == 0)
        {
            printf("Point lies on y axis\n");
        }

        if (y == 0)
        {
            printf("Point lies on x axis\n");
        }

        else
        {
            printf("Point neither lies on any axis, non origin\n");
        }
    }

    return 0;
}
