## Chapter 9 Exercises 📑

A) What will be the output of the following programs :

a)

    #include<stdio.h>
    void fun(int,int);
    int main()
    {
       int i = 5,j = 2;
       fun(i,j);
       printf("%d %d\n",i,j);
       return 0; 
    }
    void fun(int i, int j)
    {
       i = i * i;
       j = j * j;
    }

    Output : 5 2

b)    

    #include<stdio.h>
    void fun(int *,int *);
    int main()
    {
        int i = 5,j = 2;
        fun(&i,&j);
        printf("%d %d\n",i,j);
        return 0; 
    }
    void fun(int *i, int *j)
    {
        *i = *i * *i;
        *j = *j * *j;
    }

    Output : 25 4

c)

    #include<stdio.h>
    int main()
    {
        float a = 13.5;
        float *b, *c;
        b = &a;  /* suppose address of a is 1006 */
        c = b;
        printf("%u %u %u\n",&a,b,c);
        printf("%f %f %f %f %f\n",a,*(&a),*&a,*b,*c);
        return 0;
    }

    Output :
    1006 1006 1006
    13.5 13.5 13.5 13.5 13.5
    
B) Point out the error, if any, in the following programs :

a)
   
    #include<stdio.h>
    void jiaayjo(int ,int );
    int main()
    {
        int p=23,f=24;
        jiaayjo(&p,&f);
        printf("%d %d\n",p,f);
        return 0;
    }
    void jiaayjo(int q,int g)
    {
        q = q + q;
        g = g + g;
    }

    Error :
    i) Invalid conversion fro int to int*. Cannot pass address in the function whose argument accepts integer.

b)  

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

    Error : 
    i)  Can't assign a function returning void, to other variable. 
    ii) m is not declared in the argument declaration felid of function.

c)    

    #include<stdio.h>
    void function(int *);
    int main()
    {
        int i = 35, *z;
        z = function(&i);
        printf("%d\n",z);
        return 0;
    }
    void function(int *m)
    {
        return(*m + 2);
    }

    Error :
    i) function() cannot return anything with return type void.

