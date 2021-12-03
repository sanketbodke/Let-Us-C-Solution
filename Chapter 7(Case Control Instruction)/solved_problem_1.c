#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, loop, fact;
    while (1)
    {
        printf("\n1.Factorial\n");
        printf("2.prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");
        printf("Your Choice ?\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Number: ");
            scanf("%d", &num);
            fact = 1;
            for (loop = 1; loop <= num; loop++)
                fact = fact * loop;
            printf("Factorial Value = %d\n", fact);
            break;
        case 2:
            printf("\nEnter Number: ");
            scanf("%d", &num);
            for (loop = 2; loop < num; loop++)
            {
                if (num % loop == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if (loop == num)
            {
                printf("Prime Number\n");
                break;
            }
        case 3:
            printf("Enter Number: \n");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("Even Number\n");
            }
            else
            {
                printf("Odd Number\n");
            }
        case 4:
            exit(0);
        default:
            printf("Wrong Choice!\a\n");
        }
    }
    return 0;
}