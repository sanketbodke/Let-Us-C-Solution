#include<stdio.h>
#include<math.h>
void areat(float *);
int main()
{
    float area;
    areat(&area);
    printf("Area of triangle: %f\n",area);
    return 0;
}
void areat(float *area)
{
    int a,b,c,s;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c) / 2;
    *area = sqrt(s*(s-a)*(s-b)*(s-c));
}
