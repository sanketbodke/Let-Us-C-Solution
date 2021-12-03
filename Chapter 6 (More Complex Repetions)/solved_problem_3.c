// write a program to generate all combinations of 1,2 nd 3 using for loop

#include<stdio.h>
int main()
{
    int a = 1,b = 1,c = 1;
    for(a = 1;a <= 3;a++)
    {
        for(b = 1;b <= 3;b++)
        {
            for(c = 1;c <= 3; c++)
            printf("%d%d%d\t",a,b,c);
        }
    }
    return 0;
}

