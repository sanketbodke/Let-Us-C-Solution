#include<stdio.h>
int main()
{
    int year;
    printf("Enter thr year: ");
    scanf("%d", &year);
    if( (year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 4 == 0 ))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
    return 0;   
}

//.............. OR ..............//


#include<stdio.h>
int main()
{
    int year;
    printf("Enter thr year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0 )
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
    return 0;
}



