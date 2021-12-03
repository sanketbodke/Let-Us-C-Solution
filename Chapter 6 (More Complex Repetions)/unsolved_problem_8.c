#include<stdio.h>
int main()
{
    int hours;
    for(hours = 1;hours<=24;hours++)
    {
        if (hours == 24)
        {
            printf("MidNight: %d\n",hours);
        }
        else if (hours == 12)
        {
            printf("Noon: %d\n",hours);
        }
        else if (hours > 12 && hours < 24)
        {
            printf("PM : %d\n",hours);
        }
        else
        {
            printf("AM : %d\n",hours);
        }
    }
    return 0;
}


