#include<stdio.h>
int sum(int n);
int main()
{
    int enter_num;
    printf("Enter a Number: ");
    scanf("%d", &enter_num);
    printf("Sum of N numbers is %d\n",sum(enter_num));
    return 0;
}

//recursion function
int sum(int n){
    if(n == 0){
        return 0;
    }
    int sumofn = sum(n-1); //sum of 1 to n
    int sumN = sumofn + n;
    return sumN;
}