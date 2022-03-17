// #include<stdio.h>
// void swap(int *,int *,int *);
// int main()
// {
//     int *x,*y,*z;
//     printf("Enter a value of x,y and z : ");
//     scanf("%d%d%d",&x,&y,&z);
//     printf("You entered x = %d y = %d z = %d\n",x,y,z);
//     swap(&x,&y,&z);
//     printf("After shifting value at right x = %d y = %d z = %d \n",x,y,z);
//     return 0;
// }
// void swap(int *x,int *y,int *z)
// {
//     int t1;
//     t1 = *x;
//     *x = *y;
//     *y = *z;
//     *z = t1;
// }

#include<stdio.h>
void swap(int *,int *);
int main()
{
    int *a,*b;
    printf("Enter a value of a and b: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d, b = %d\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    *a = *b;

}

/*
a        b
3        4
12221    12223 
*/