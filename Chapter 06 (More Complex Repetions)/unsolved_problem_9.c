#include<stdio.h>
int main()
{
    int i,j,spaces,number=1;
    for(i=1;i<=4;i++)
    {
        for(spaces=1;spaces<=(4-i);spaces++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}