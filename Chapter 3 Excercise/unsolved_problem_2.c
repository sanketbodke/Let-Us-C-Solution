#include <stdio.h>
int main()
{
    int ram, shyam, Ajay;
    printf("Enter the age of Ram shyam and ajay: ");
    scanf("%d%d%d", &ram, &shyam, &ajay);
    if (ram < shyam)
    {
        if (ram < Ajay)
        {
            printf("Ram is young");
        }
    }
    if (shyam < ram)
    {
        if (shyam < Ajay)
        {
            printf("Shyam is young");
        }
    }
    if (Ajay < ram)
    {
        if (Ajay < shyam)
        {
            printf("Ajay is young");
        }
    }

    return 0;
}
