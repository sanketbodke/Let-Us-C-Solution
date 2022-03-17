/* Write a function to compute the greatest common divisor given by Euclid’s algorithm, 
exemplified for J = 1980, K = 1617 as follows:

1980  /  1617 = 1	  1980 – 1 * 1617 = 363
1617  /  363 = 4	  1617 – 4 * 363 = 165
363   /  165 = 2	  363 – 2 * 165 = 33
5     /  33 = 5	      165 – 5 * 33 = 0

*/

#include<stdio.h>  
void calc_gcd(int, int, int*);  
  
int main()  
{  
    int j, k, gcd;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &j, &k);  
  
    calc_gcd(j, k, &gcd);  
  
    printf("\nGreatest Common Divisor of %d and %d is %d.\n", j, k, gcd);  
  
    return 0;  
}  
  
void calc_gcd(int numerator, int denominator, int *gcd)  
{  
    int temp, num;  
  
    if(denominator == 0)  
    {  
        *gcd = numerator;  
    }  
    else if(numerator == 0)  
    {  
        *gcd = denominator;  
    }  
    else  
    {  
        num  = numerator / denominator;  
        temp = numerator - num * denominator;  
  
        while(temp)  
        {  
            numerator   = denominator;  
            denominator = temp;  
            num  = numerator / denominator;  
            temp = numerator - num * denominator;  
        }  
  
        *gcd = denominator;  
    }  
}  