#include<stdio.h>
int main()
{
    int sid1,sid2,sid3,sum;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d", &sid1,&sid2,&sid3);
    if (sid1 > sid2 && sid1 > sid3)
    {
        sum = ((sid2 + sid3) > sid1);
    }
    else if (sid2 > sid1 && sid2 > sid3)
    {
        sum = ((sid1 + sid3) > sid2);
    }
    else if (sid3 > sid1 && sid3 > sid2)
    {
        sum = ((sid1 + sid2) > sid3);
    }
    if (sum)
    {
        printf("valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle \n");
    }
    return 0;
}

////.............OR............////

#include<stdio.h>
int main()
{
    int side1,side2,side3,largeside;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1,&side2,&side3);
    if (side1 > side2 && side1 > side3)
    {
        largeside = ((side2 + side3) > side1);
    }
    else if (side2 > side3)
    {
        largeside= ((side1 + side3) > side2);
    }
    else
    {
        largeside= ((side1 + side2) > side3);
    }
    if (largeside)
    {
        printf("valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
    
}

