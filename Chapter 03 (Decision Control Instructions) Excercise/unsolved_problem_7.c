#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, radius, a, b, dis;

    printf("Enter a center coordinate(x and y): ");
    scanf("%f%f", &x, &y);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    printf("Enter a point coordinate(a and b): ");
    scanf("%f%f", &a, &b);

    dis = sqrt(pow(a - x, 2) + pow(b - y, 2));

    if (dis < radius)
    {
        printf("point lie inside of circle");
    }

    if (dis > radius)
    {
        printf("point lie outside of circle");
    }

    if (dis == radius)
    {
        printf("point lie on the circle");
    }

    return 0;
}
