A) What will be the output of the following program:

    a) 
    #include<stdio.h>
    int main()
    {
    char suite = 3;
    switch(suite)
    {
        case 1:
        printf("Diamond\n");
        case 2:
        printf("Spade\n");
        default:
        printf("Heart\n");
    }
    printf("I through one wears a suite\n");
    return 0;
    }

    Output: 
    Heart
    I through one wears a suite

    b)
    #include<stdio.h>
    int main()
    {
    int c = 3;
    switch(c)
    {
        case '3':
        printf("You never win the silver prize\n");
        break;
        case 3:
        printf("You always lose the gold prize\n");
        break;
        default:
        printf("Of course provided you win a prize\n");
    }
    return 0;
    }

    Output:
    You always lose the gold prize

    c)
    #include<stdio.h>
    int main()
    {
    int i = 3;
    switch(i)
    {
        case 0:
        printf("Customers are dicey\n");
        case 1 + 0:
        printf("Markets are pricey\n");
        case 4 / 2:
        printf("Investors are moody\n");
        case 8 % 5:
        printf("At least employees are good\n");
    }
    return 0;
    }

    Output:
    At least employees are good

    d)
    #include<stdio.h>
    int main()
    {
    int k;
    float j = 2.0;
    switch(k = j + 1)
    {
        case 3:
        printf("Trapped\n");
        break;
        default:
        printf("Caught\n");
    }
    return 0;
    }

    Output:
    Trapped

    e)
    #include<stdio.h>
    int main()
    {
    int ch = 'a' + 'b';
    switch(ch)
    {
        case'a':
        case'b':
        printf("You entered b\n");
        case'A':
        printf("a as in ashar\n");
        case 'b' + 'a':
        printf("You entered a and b\n");
    }
    return 0;
    }

    Output:
    You entered a and b

B) Point out the errors , if any , in the following programs:

    a)
    #include<stdio.h>
    int main()
    {
        int suit = 1;
        switch(suit);
        {
            case 0;
            printf("Club\n");
            case 1;
            printf("Diamond\n);
        }
        return 0;
    }

    Error. Semi-colon after switch statement and after case 0 and case 1.

    b)
    #include<stdio.h>
    int main()
    {
        int temp;
        scanf("%d",&temp);
        switch(temp)
        {
            case(temp <= 20):
            printf("Oooooooohhh! Damn cool!\n");

            case(temp > 20 && temp <= 30):
            printf("Rain rain here again!\n);

            case(temp > 30 && temp <= 40):
            printf("Wish I am on Everest\n");

            default:
            printf("Good old nagpur weather\n);
        }
        return 0;
    }

    Error: Relational operators cannot be used in cases.

    c)
    #include<stdio.h>
    int main()
    {
        float a = 3.5;
        switch(a)
        {
            case 0.5:
            printf("The art of C\n); break;
            case 1.5:
            printf("The spirit of C\n); break;
            case 2.5:
            printf("See through C\n); break;
            case 3.5:
            printf("Simply C\n);
        }
        return 0;
    }

    Error. Floats cannot be used in cases.

    d)
    #include<stdio.h>
    int main()
    {
        int a = 3,b = 4,c;
        c = b - a;
        switch(c)
        {
            case 1 || 2:
            printf("God give me a chance to change things\n");
            break;

            case a || b:
            printf("God give me a chance to run my show\n);
            break;
        }
        return 0;
    }

    Error = A case needs a constant expression. Logical operators cannot be used in cases.

c) Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic : <br>
i) If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.<br>
ii) If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.<br>
iii) If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.
   
    #include<stdio.h>
    int main()
    {
       int grace = 0,grade,failed;
       printf("Enter the class obtained by the student: \n");
       scanf("%d",&grade);
       printf("No of subject student have the fail: \n");
       scanf("%d",&failed);
       switch(grade)
       {
           case 1:
           {
               if (failed > 3)
               {
                   grace = 0;
            }
               else
               {
                   grace = 5;
               }
               printf("The student has obtained a grace marks of %d per subject\n",grace);
               break;
           }
           case 2:
           {
               if (failed >  2)
               {
                   grace = 0;
               } 
               else
               {
                   grace = 4;
               }
               printf("The student has obtained a grace marks of %d per subject\n",grace);
               break;
           }
           case 3:
           {
               if (failed > 1)
               {
                   grace = 0;
               }
               else
               {
                   grace = 5;
               }
               printf("The student has obtained a grace marks of %d per subject\n",grace);
               break;
           }
           default: 
           printf("You entered wrong class for the student\n");
       }
       return 0;
    }