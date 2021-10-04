/* If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right-angled triangle. */

#include<stdio.h>
int main()
{
    int side1,side2,side3,a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1,&side2,&side3);

    if ((side1 == side2) && (side2 == side3))
    {
        printf("Equilateral Triangle\n");
    }
    if ((side1 == side2) && (side2 != side3))
    {
        printf("Isosceles Triangle\n");
    }
    if ((side2 == side3) && (side1 != side3))
    {
        printf("Isosceles Triangle\n");
    }
    if ((side1 == side3) && (side2 != side3))
    {
        printf("Isosceles Triangle\n");
    }
    if ((side1 !=side2) && (side2 !=side3 && side1 != side3))
    {
        printf("Scalene Triangle\n");
    }
    if ((side1 * side1 + side2 * side2) == (side3 * side3))
    {
        printf("Right angle triangle\n");
    }
    return 0;
}