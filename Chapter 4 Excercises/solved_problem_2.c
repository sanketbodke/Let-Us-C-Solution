#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character from the keyboard: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Character is capital letter\n");
    }
    if (ch >=97 && ch <= 122)
    {
        printf("Character is small case\n");
    }
    if (ch >= 48 && ch <= 57)
    {
        printf("Character is digit\n");
    }
    if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 122))
    {
        printf("Character is a special symbols\n");
    }
    return 0;

}