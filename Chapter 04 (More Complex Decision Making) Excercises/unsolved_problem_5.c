/* Whether the character entered through the keyboard is a
lower case alphabet or not. */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    ch >= 97 && ch <= 122 ? printf("Character is lowercase alphabet\n") : printf("Character is not lowercase alphabet\n");   
    return 0;
}

/* Whether a character entered through the keyboard is a
special symbol or not. */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127 ? printf("Character is special symbols\n") : printf("Character is not special symbols\n");
    return 0;
}

  