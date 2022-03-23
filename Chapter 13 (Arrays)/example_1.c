/* Demonstration of call by value & call by reference */

#include<stdio.h>
void display1(int);
void display2(int *);
int main()
{
    int i;
    int marks[]={88,96,79,85,88,91,79};
    for(i=0;i<=5;i++)
    {
        display1(marks[i]);
    }
    for(i=0;i<=5;i++)
    {
        display2(&marks[i]);
    }
    return 0;
}
void display1(int m)
{
    printf("%d ",m);
}
void display2(int *n)
{
    printf("%d ",*n);
}