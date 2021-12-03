#include<stdio.h>
int main()
{
    int numbers_loop,patter;
    for(numbers_loop = 1;numbers_loop<=10;numbers_loop++)
    {
        for(patter = 1;patter <= numbers_loop; patter++)
        {
            printf("%d",patter);
        }
        printf("\n");
    }
    return 0;
}