## Chapter 5 Exercises 📑

A) What will be the output of the following programs:

    a) 
    #include<stdio.h>
    int main()
    {
      int i = 1;
      while ( i <= 10 );
     {
      printf("%d\n", i);
      i++;
     }
     return 0;
    }

    Output: No Output Indefinite while loop because of a ‘;’ at the end of while

    b)
    #include<stdio.h>
    int main()
    {
        int x = 4,y,z;
        y = --x;
        z = x--;
        printf("%d%d%d\n",x,y,z);
        return 0;
    } 
    Output : 233

    c)
    #include<stdio.h>
    int main()
    {
        int x = 4,y = 3,z;
        z = x-- -y;
        printf("%d%d%d\n"x,y,z);
        return 0;
    }
    Output: 3 3 1

    d)
    #include<stdio.h>
    int main()
    {
        while('a'<'b')
          printf("malayalam is a palindrome\n");
        return 0;  
    }
    Output: malayalam is a palindrome’ will be printed indefinitely

    e)
    #include<stdio.h>
    int main()
    {
        int i;
        while(i = 10)
        {
            printf("%d\n",i);
            i = i + 1;
        }
        return 0;
    }
    Output: 10 will be printed indefinitely

    f)
    #include<stdio.h>
    int main()
    {
        float x = 1.1;
        while(x == 1.1)
        {
            printf("%f\n",x);
            x = x - 0.1;
        }
        return 0;
    }
    Output: No output. Since a float variable is compared with double constant, the condition will not satisfy.


B) Attempt the following questions:

 a) Write a program to print all the ASCII values and their equivalent
    characters using a while loop. The ASCII values vary from 0 to 255.

    #include<stdio.h>
    int main()
    {
       int i = 0;
       while (i <=255)
      {
        printf("%d %c\n",i,i);
        i++;
      }
        return 0;
    }

b) Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).

    #include <stdio.h>
    int main()
    {

    int number = 1;

    while (number <= 500)
    {
        int last_digit = number % 10;      
        int remaining_digit = number / 10; 

        int second_digit = remaining_digit % 10;   
        int remaining_digit2 = remaining_digit / 10; 

        int armstrong_number = ((last_digit * last_digit * last_digit) + (second_digit * second_digit * second_digit) + (remaining_digit2 * remaining_digit2 * remaining_digit2));

        if (armstrong_number == number)
        {
            printf("%d is an Armstrong Number\n",armstrong_number);
        }
          number++;
      }
    return 0;
    }

c) Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows: <br>
 There are 21 matchsticks. <br>
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks. <br>
 After the person picks, the computer does its picking. <br>
 Whoever is forced to pick up the last matchstick loses the game. <br>

    Uploading Soon

d) Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.

    #include<stdio.h> 
    int main()
    {
      int number,positive=0,negative=0,zero=0;
      int enter_number_loop;
      while (enter_number_loop>=0)
      {
          printf("Enter Number: ");
          scanf("%d",&number);
          enter_number_loop++;
          if (number > 0)
          {
            positive++;
          }
          else if (number < 0)
          {
            negative++;
          }
          else
          {
            zero++;
          }
          printf("Positive Number Count: %d\n",positive);
          printf("Negative Number Count: %d\n",negative);
          printf("Zero Number Count: %d\n",zero);
      }
        return 0;
    }

e) Write a program to receive an integer and find its octal equivalent. <br>
(i) (Hint: To obtain octal equivalent of an integer, divide it continuously
by 8 till dividend doesn’t become zero, then write the remainders
obtained in reverse direction.)

    Uploading Soon

f) Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.

    #include <stdio.h>
    int main()
    {
      int set_of_num, loop = 0, enter_number, min_number, max_number, difference;
      printf("How many numbers in set: ");
      scanf("%d", &set_of_num);

      while (loop < set_of_num)
      {
         printf("Enter Number: ");
         scanf("%d", &enter_number);

         if (loop == 0)
         {
             max_number = enter_number;
             min_number = enter_number;
         }
         if (enter_number > max_number)
         {
             max_number = enter_number;
         }
         if (enter_number < min_number)
         {
             enter_number = min_number;
         }
         loop++;
      }
    difference = max_number - min_number;
    printf("Difference bettewen max and min number is: %d\n", difference);
    return 0; 
    }
