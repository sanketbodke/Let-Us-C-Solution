/* Write a program to find the greatest of three numbers entered
through the keyboard. Use conditional operators. */

#include <stdio.h>
int main()
{
    int n1, n2, n3, great;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    great = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    printf("Greatest number is: %d", great);
    return 0;
}