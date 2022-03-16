## Chapter 10 Exercises 📑

A) What will be the output of the following programs :

    a)
    #include<stdio.h>
    int main()
    {
        printf("C to it that C survives\n");
        main();
        return 0;
    }

    Output: infinite recursion/loop

    b)
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        int i = 0;
        i++;
        if(i<=5)
        {
           printf("C adds wings to your thoughts\n");
           exit(0);
           main();
        }
        return 0;
    }

    Output: C adds wings to your thoughts printed