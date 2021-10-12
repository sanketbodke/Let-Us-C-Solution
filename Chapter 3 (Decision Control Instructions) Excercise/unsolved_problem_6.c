#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, m, n;
    printf("Enter the points x1 and y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the points x2 and y2: ");
    scanf("%d%d", &x2, &y2);

    printf("Enter the points x3 and y3: ");
    scanf("%d%d", &x3, &y3);

    m = y2 - y1 / x2 - x1;
    n = y3 - y2 / x3 - x2;

    if (m == n)
    {
        printf("Points fall on straight line");
    }
    else
    {
        printf("Points not fall on straight line");
    }

    return 0;
}
