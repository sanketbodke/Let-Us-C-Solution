#include <stdio.h>
int main()
{
    int l, b, area, perimeter;

    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d", &l, &b);

    area = l * b;
    printf("The area of rectangle: %d\n", area);

    perimeter = 2 + (l * b);
    printf("The perimeter of rectangle: %d\n", perimeter);

    if (area > perimeter)
    {
        printf("The area is greater than perimeter");
    }
    else
    {
        printf("The area is not greater than perimeter");
    }

    return 0;
}
