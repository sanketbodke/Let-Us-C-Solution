#include<stdio.h>
int main()
{
    int i,avg;
    int sum = 0;
    int marks[5];
    for (i = 0; i<5;i++)
    {
        printf("Enter marks: \n");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 5;
    printf("%d",avg);
    return 0;
}