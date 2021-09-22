## Chapter 1 Exercises 📑

    A) Which of the following are invalid C constants and why?
    
    a)’3.15’
    Invalid, A character constant contain only 1 character.

    b) 35,500
    Invalid, A Integer constant cannot contain a comma.

    c) 3.25e2
    Valid

    d) 2e-3
    Valid

    e) ‘eLearning’
    Invalid, A character constant contains only 1 character, And both the           inverted commas should point to the left ’A’.

    f) ”Show”
    Invalid, A character constant contains only 1 character.

    g) ‘Quest’
    Invalid, A character constant contains only 1 character.

    h) 25
    Valid
  
    i) 4 6 5 2
    Invalid, There cannot be a space within constant.

B) Which of the following are invalid variable names and why?

    B’day
    Invalid , A ’ is not allowed in the variable.

    int
    Invalid , keyword not used as a variable name.

    $hello
    Invalid , Variable name names must begin with an alphabet or underscore.

    #HARSH
    Invalid , Variable name names must begin with an alphabet or underscore.

    dot.
    Invalid , A “.” is not allowed in variable names.

    number
    Valid

    totalArea
    Valid

    _main()
    Valid

    temp_in_Deg
    Valid

    total%
    Invalid , A “%” is not allowed in variable names.

    1st
    Invalid , Variable name names must begin with an alphabet or underscore.

    stack-queue
    Invalid, We cannot use hyphen invariable names.

    Variable name
    Invalid , Variable name cannot contain space.

    %name%
    Invalid , Variable name names must begin with an alphabet or underscore.

    salary
    Valid

C) State whether the following statements are True or False.

    a) C language was developed by Dennis Ritchi.
    True

    b) Operating systems like Windows, UNIX, Linux and Android are written in C. 
    True

    c) C language programs can easily interact with hardware of a PC/Laptop.
    True

    d) A real constant in C can be expressed in both Fractional and Exponential forms.
    True

    e) A character variable can at a time store only one character.
    True

    f) The maximum value that an integer constant can have varies from one compiler to another.
    True

    g) Usually all C statements are written in small case letters.
    True

    h) Spaces may be inserted between two words in a C statement.
    True

    i) Spaces cannot be present within a variable name. 
    True

    j) C programs are converted into machine language with the help of a program called Editor.
    False

    k) Most development environments provide an Editor to type a C program and a Compiler to convert it into machine language.
    True

    l) int, char, float, real, integer, character, char, main, printf and scanf all are keywords.
    False

D) Match the following pairs.

    a) \n             Escape sequence 
              
    b) 3.145          Real Constant

    c) -6513          Integer Constant

    d) ’D’            Character Constant

    e) 4.25e-3        Exponential Form

    f) main()         Function

    g) %f,%d,%c       Format Specifier

    h) ;              Statement terminator

    i) Constant       Literal

    j) Variable       Identifier

    k) &              Address of operator

    l) printf()       Output Function

    m) scanf()        Input Function


E) Point out the errors, if any, in the following programs:

    a) 

    int main()
    { 
    int a; float b; int c;
    a = 25; b = 3.24; c = a + b * b - 35;
    printf("final value is = %d\n", c);
    }

    No Error : Multiple C statements can be written in a single line.

    b)

    #include <stdio.h>
    int main() 
    {
    int a = 35; float b = 3.24;
    printf("%d %f %d", a,b + 1.5,235);
    }

    No Error : The list being printed in printf() may contain variables, constants or expressions.

    c) 

    #include <stdio.h>
    int main()  
    {
    int a,b,c;
    scanf("%d %d %d, a,b,c");
    }

    Error: We should use & before each variable used in scanf()

    d)

    #include <stdio.h>
    int main()
    {
    int m1,m2,m3
    printf("Enter 3 subjects Marks")
    scanf("%d %d %d", &m1,&m2,&m3)
    printf("You entered %d %d %d", m1,m2,m3)
    }

    Error: Semicolon should be present at the end of type declaration,printf() and scanf() statements. 

F) Attempt the following question.

a) Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.

    #include<stdio.h>
    int main(){
    float f,c;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &f);
    c = (f -32) * 5 / 9;
    printf("%f, temperature in celsius", c);
    return 0;
    }

b) The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.

    #include <stdio.h>
    int main()
    {
    int le, brth, ar, pr, re;
    float cir, are;
    printf("\nEnter the length and breadth of a rectangle: ");
    scanf("%d %d", &le, &brth);
    ar = (le * brth);
    pr = 2 + (le * brth);
    printf("The area of rectangle = %d\n", ar);
    printf("The perimeter of rectangle = %d\n,", pr);

    printf("\nEnter the redius of circle: ");
    scanf("%d", &re);
    are = 3.14 * (re * re);
    cir = 3.14 * (re * 2);
    printf("The area of circle = %f\n", are);
    printf("The circumference of circle = %f\n", cir);
    return 0; 

    }

(c) Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2, ... A8.

    #include <stdio.h>
    int main()
    {
    int A0wd, A0ht;
    int A1wd, A1ht;
    int A2wd, A2ht;
    int A3wd, A3ht;
    int A4wd, A4ht;
    int A5wd, A5ht;
    int A6wd, A6ht;
    int A7wd, A7ht;
    int A8wd, A8ht;
 
    A0wd = 1189;
    A0ht = 841;
    printf("\nA0 paper width: %dmm, height: %dmm", A0wd,A0ht);
 
    A1wd = A0wd / 2;
    A1ht = A0ht; 
    printf("\nA1 paper width: %dmm, height: %dmm", A1wd,A1ht);
 
    A2wd = A1wd / 2;
    A2ht = A1ht;
    printf("\nA2 paper width: %dmm, height: %dmm", A2wd, A2ht);
 
    A3wd = A2wd / 2;
    A3ht = A2ht;
    printf("\nA3 paper width: %dmm, height: %dmm", A3wd, A3ht);
 
    A4wd = A3wd / 2;
    A4ht = A3ht;
    printf("\nA4 paper width: %dmm, height: %dmm", A4wd,A4ht);
 
    A5wd = A4wd / 2;
    A5ht = A4ht;
    printf("\nA5 paper width: %dmm, height: %dmm", A5wd, A5ht);
 
    A6wd = A5wd / 2;
    A6ht = A5ht;
    printf("\nA6 paper width: %dmm, height: %dmm", A6wd, A6ht);
 
    A7wd = A6wd / 2;
    A7ht = A6ht;
    printf("\nA7 paper width: %dmm, height: %dmm", A7wd, A7ht);
 
    A8wd = A7wd / 2;
    A8ht = A7ht;
    printf("\nA8 paper width: %dmm, height: %dmm", A8wd, A8ht);
 
    return 0;  
    }














