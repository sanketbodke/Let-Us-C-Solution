## Chapter 8 Exercises 📑

A) Point out error, if any, in the following programs:

    a)
    #include<stdio.h>
    int addmult(int,int)
    int main()
    {
        int i=3,j=4,k,l;
        k = addmult(i,j);
        j = addmult(i,j);
        printf("%d %d\n",k,j);
        return 0;
    }
    int addmult(int ii,int jj)
    {
        int kk,ll;
        kk = ii + jj;
        ll = ii * jj;
        return(kk,ll);
    }

    Error: A function can return only one value at a time.

    b)
    #include<stdio.h>
    int main()
    {
        int a;
        a = message();
        return 0;
    }
    void message()
    {
        printf("Viruses are written in C\n");
        return;
    }    
   
    Error: Function prototype not declare.

    c)
    #include<stdio.h>
    int main()
    {
        float a = 15.5;
        char ch = 'c';
        printit(a,ch);
        return 0;
    }
    printit(a,ch)
    {
        printf("%d %c\n",a,ch);
    }

    Error: Function prototype not declare.

    d)
    #include<stdio.h>
    int main()
    {
        let_us_c()
        {
            printf("C is a Cimple minded language !\n");
            printf("Others are of course no match !\n");
        }
        return 0;
    }

    Error: Function prototype not declare.
           Function not define.

B) State whether the following statements are True or False.

    a) The variables commonly used in c functions are available to all the functions in a program.
    Ans : False

    b) To return the control back to the calling function we must use the keyword return.
    Ans : True

    c) The same variable names can be used in different functions without any conflict.
    Ans : True

    d) Every called function must contain a return statement.
    Ans : False

    e) A function may contain more than one return statement.
    Ans : True

    f) Each return statement in a function may return a different value.
    Ans : True  

    g) A function can still be useful even if you don't pass any arguments to it and the function doesn't return any value back.
    Ans : True

    h) Same names can be used for different functions without any conflict.
    Ans : True

    i) A function may be called more than once from any other function.
    Ans : True

C) Answer the following questions:

a) Any year is entered through the keyboard. Write a function to 
determine whether the year is a leap year or not.

    #include<stdio.h>
    int year(int);
    int main()
    {
       int enter_year;
       printf("Enter a year: ");
       scanf("%d",&enter_year);
       year(enter_year);
       return 0;
    } 
    int year(int enter_year)
    {
       if (enter_year % 400 == 0 && enter_year % 100 == 0)
        {
          printf("Year is leap year\n");
        }
        else if (enter_year % 4 == 0 && enter_year % 100 != 0)
        {
          printf("Year is leap year\n");
        }
        else
        {
          printf("Year is not leap year\n");
        }  
    } 

b) A positive integer is entered through the keyboard write a function
to obtain the prime factor of this number.

For example prime factors of 24 are 2,2,2 and 3, whereas prime factor 
of 35 are 5 and 7.    

    #include<stdio.h>
    int prime_factor(int);
    int main()
    {
       int enter_num;
       printf("Enter a positive integer: ");
       scanf("%d",&enter_num);
       prime_factor(enter_num);
       return 0;
    }
    int prime_factor(int enter_num)
    {
       int count;
       for(count = 2;enter_num > 1;count++)
        {
           while (enter_num % count == 0)
            {
                printf("%d ",count);
                enter_num = enter_num / count;
            }
        }
    }