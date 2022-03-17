## Chapter 11 Exercises 📑

A) What will be the output of the following programs :

    a)
    #include<stdio.h>
    int i = 0;
    void val();
    int main()
    {
        printf("main's i = %d\n", i);
        i++;
        val();
        printf("main's i = %d\n", i);
        val();
        return 0;
    }
    void val()
    {
       i = 100;
       printf("val's i = %d\n", i);
       i++;
    }

    Output: 

    main's i = 0
    val's i = 100
    main's i = 101
    val's i = 100

    b)
    #include<stdio.h>
    int main()
    {
        static int count = 5;
        printf("count = %d\n", count--);
        if(count != 0)
           main();
        return 0;
    }

    Output:

    count = 5
    count = 4
    count = 3
    count = 2
    count = 1

    c)
    #include<stdio.h>
    void fnc();
    int main()
    {
       func();
       func();
       return 0;
    }
    void func()
    {
       auto int i = 0;
       register int j = 0;
       static int k = 0;
       i++;j++;k++;
       printf("%d % d %d\n", i, j, k);
    }

    Output:

    1  1 1
    1  1 2 

    d)
    #include<stdio.h>
    int x = 10;
    int main()
    {
       int x = 20;
       {
          int x = 30;
          printf("%d\n",x);
       }
       printf("%d\n",x);
       return 0;
    }

    Output:
    30
    20

B) Point out the errors, if any, in the following programs:

    a) 
    #include<stdio.h>
    int main()
    {
       long num;
       num = 2;
       printf("%d\n",num);
       return 0;
    }

    Ans = No Error   

    b)
    #include<stdio.h>
    int main()
    {
       char ch = 200;
       printf ("%d\n",ch) ;
       return 0;
    }

    Ans = No Error -56 will be printed

    c)
    #include<stdio.h>
    int main()
    {
        long float a = 25.345e454;
        unsigned double b = 25;
        printf("%lf %d\n",a,b);
        return 0;
    }

    Ans = Double cannot be unsigned, and float "out of range" warning.

    d) 
    #include<stdio.h>
    static int y;
    int main()
    { 
       static int z ;
       printf("%d %d\n", y, z);
       return 0;
    }

    Ans = No Error

c) State whether the following statements are True or False:

    a) The value of an automatic storage class variable persists between various function invocations. 
    Ans: false

    b) If the CPU registers are not available, the register storage class variables are treated as static storage class variables.
    Ans: False

    c) The register storage class cannot hold float values.
    Ans: False

    d) If we try to use register storage class for a float variable the compiler will report an error message.
    Ans: False

    e) The default value of automatic variable is zero.
    Ans: False

    f) The life of static variable is till the control remains within the block in which is defined.
    Ans: False

    g) If a global variable is to be defined, then the extern keyword is necessary in its declaration.
    Ans: False

    h) The address of register variable is not accessible.
    Ans: True