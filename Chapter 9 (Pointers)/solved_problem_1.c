#include<stdio.h>
#include<math.h>
void stats(int *,int *,double *);
int main()
{
    int sum,avg;
    double stdev;
    stats(&sum,&avg,&stdev);
    printf("sum is %d\nAverage is %d\nStandard division is %f\n",sum,avg,stdev);
    return 0;
}
void stats(int *sum,int *avg, double *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("Enter 5 numbers: \n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum / 5;
    *stdev = sqrt((pow((n1 - *avg),2.0) + pow((n2 - *avg),2.0) + pow((n3 - *avg),2.0) + pow((n4 - *avg),2.0) + pow((n5 - *avg),2.0))/4); 
} 

/*
#include <stdio.h>
#include <math.h>
void stats(int, int, int, int, int, int *, int *, double *);
int main()
{
    int n1, n2, n3, n4, n5, sum, avg;
    double stdev;
    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    stats(n1, n2, n3, n4, n5, &sum, &avg, &stdev);
    printf("Sum is %d\nAverage is %d\nstandard division is %f\n", sum, avg, stdev);
    return 0;
}
void stats(int n1, int n2, int n3, int n4, int n5, int *sum, int *avg, double *stdev)
{
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum / 5;
    *stdev = sqrt((pow((n1 - *avg), 2.0) + pow((n2 - *avg), 2.0) + pow((n3 - *avg), 2.0) + pow((n4 - *avg), 2.0) + pow((n5 - *avg), 2.0)) / 4);
}
*/