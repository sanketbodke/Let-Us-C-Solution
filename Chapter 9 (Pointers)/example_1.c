// #include<stdio.h>
// int main()
// {
//     int i=3;
//     int *j; 
//     /* the declaration tell the compiler that j  will 
//     be used to store the address of an integer value. */
//     j = &i; 
//     /* i address collected in a variable by saying &i */  
//     printf("Address of i = %u\n",&i);
//     printf("Address of i = %u\n",j);
//     printf("Address of j = %u\n",&j);  
//     printf("Value of j = %u\n",j);
//     printf("Value of i = %d\n",i);
//     printf("Value of i = %d\n",*(&i)); /* value at address */
//     printf("Value of i = %d\n",*j); 
//     /* in j i address value is stored in this address *j (3) value is stored */
//     return 0;
// }

// #include<stdio.h>
// void fun(int,int);
// int main()
// {
//     int i = 5,j = 2;
//     fun(i,j);
//     printf("%d %d\n",i,j);
//     return 0; 
// }
// void fun(int i, int j)
// {
//     i = i * i;
//     j = j * j;
// }

// #include<stdio.h>
// void fun(int *,int *);
// int main()
// {
//     int i = 5,j = 2;
//     fun(&i,&j);
//     printf("%d %d\n",i,j);
//     return 0; 
// }
// void fun(int *i, int *j)
// {
//     *i = *i * *i;
//     *j = *j * *j;
// }

// #include<stdio.h>
// int main()
// {
//     float a = 13.5;
//     float *b, *c;
//     b = &a;  /* suppose address of a is 1006 */
//     c = b;
//     printf("%u %u %u\n",&a,b,c);
//     printf("%f %f %f %f %f\n",a,*(&a),*&a,*b,*c);
//     return 0;
// }

// #include<stdio.h>
// void jiaayjo(int ,int );
// int main()
// {
//     int p=23,f=24;
//     jiaayjo(&p,&f);
//     printf("%d %d\n",p,f);
//     return 0;
// }
// void jiaayjo(int q,int g)
// {
//     q = q + q;
//     g = g + g;
// }

#include<stdio.h>
void check (int);
int main()
{
    int k = 35, z;
    z = check(k);
    printf("%d\n",z);
    return 0;
}
void check(m)
{
    int m;
    if (m > 40)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

// #include<stdio.h>
// void function(int *);
// int main()
// {
//     int i = 35, *z;
//     z = function(&i);
//     printf("%d\n",z);
//     return 0;
// }
// void function(int *m)
// {
//     return(*m + 2);
// }