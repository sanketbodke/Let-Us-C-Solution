## Chapter 4 Exercises 📑

A) If a = 10, b = 12, c = 0, find the values of the expressions in the following table:

    Expression	                      Value
    a != 6 && b > 5                     1
    a == 9 || b < 3                     0
    ! ( a < 10 )                        1
    ! ( a > 5 && c )                    1
    5 && c != 8 || !c                   1

B) What will be the output of the following programs:  

    a)

    #include <stdio.h>
    int main()
    {
    int i = 4, z = 12;
    if ( i = 5 || z > 50 )
    printf ( "Dean of students affairs\n" );
    else
    printf ( "Dosa\n" );
    return 0;
    }
   
    Output: Dean of students affairs

    b)

    #include <stdio.h>
    int main()
    {
    int i = 4, j = -1, k = 0, w, x, y, z;
    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j || k;
    printf ( "w = %d x = %d y = %d z = %d\n", w, x, y, z );
    return 0;
    }

    Output: w = 1 x = 0 y = 1 z = 1

    c) 

    #include <stdio.h>
    int main()
    {
    int x = 20, y = 40, z = 45;
    if ( x > y && x > z )
    printf ( "biggest = %d\n", x );
    else if ( y > x && y > z )
    printf ( "biggest = %d\n", y );
    else if ( z > x && z > y )
    printf ( "biggest = %d\n", z );
    return 0;
    }

    Output: biggest = 45

    d) 

    # include <stdio.h>
    int main()
    {
    int i = -4, j, num;
    j = ( num < 0 ? 0 : num * num );
    printf ( "%d\n", j );
    retrun 0;
    }

    Output: Unpredictable. num not initialized

    e)

    #include <stdio.h>
    int main()
    {
    int k, num = 30;
    k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 );
    printf ( "%d\n", num );
    return 0;
    }

    Output: 30


C) Point out the errors, if any, in the following programs:

    a)

    #include <stdio.h>
    int main()
    {
    char spy = 'a', password = 'z';
    if ( spy == 'a' or password == 'z' )
    printf ( "All the birds are safe in the nest\n" );
    return 0;
    }

    Answer: ‘or’ cannot be used to combine conditions . Use ||

    b)

    #include <stdio.h>
    int main( )
    {
    int i = 10, j = 20;
    if ( i = 5 ) && if ( j = 10 )
    printf ( "Have a nice day\n" );
    return 0;
    }

    Answer: Condition should be if ( i == 5 && j == 10 )

    c)

    #include <stdio.h>
    int main( )
    {
    int x = 10, y = 20;
    if ( x >= 2 and y <= 50 );
    printf( "%d\n", x );
    return 0 ;
    }

    Answer: ‘and’ cannot be used to combine conditions . Use &&

    d)

    #include <stdio.h>
    int main( )
    {
    int x = 2;
    if ( x == 2 && x != 0 );
    printf ( "Hello\n" );
    else
    printf ( "Bye\n" );
    return 0;
    }

    Answer: The if statement should not be terminated by a semicolon.

    e)

    #include <stdio.h>
    int main()
    {
    int j = 65;
    printf ( "j >= 65 ? %d : %c\n", j );
    return 0;
    }

    Answer: No Error

    f)

    #include <stdio.h>
    int main()
    {
    int i = 10, j;
    i >= 5 ? j = 10 : j = 15;
    printf ( "%d %d\n", i, j ) \;
    return 0;
    }

    Answer: LValue required. Parenthesize j = 10 and j = 15 to
    eliminate the error.

    g)

    #include <stdio.h>
    int main( )
    {
    int a = 5, b = 6 ;
    ( a == b ? printf ( "%d\n", a ) );
    return 0 ;
    }

    Answer: The ? operator must have a matching : operator.

    h)

    # include <stdio.h>
    int main()
    {
    int n = 9 ;
    ( n == 9 ? printf ( "Correct\n" ) ; : printf ( "Wrong\n" ) ; );
    return 0 ;
    }

    Answer: Remove the ; after each printf()

D) Attempt the following:

a) If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right-angled triangle.

    #include<stdio.h>
    int main()
    {
    int side1,side2,side3,a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1,&side2,&side3);

    if ((side1 == side2) && (side2 == side3))
    {
        printf("Equilateral Triangle\n");
    }
    if ((side1 == side2) && (side2 != side3))
    {
        printf("Isosceles Triangle\n");
    }
    if ((side2 == side3) && (side1 != side3))
    {
        printf("Isosceles Triangle\n");
    }
    if ((side1 == side3) && (side2 != side3))
    {
        printf("Isosceles Triangle\n");
    }
    if ((side1 !=side2) && (side2 !=side3 && side1 != side3))
    {
        printf("Scalene Triangle\n");
    }
    if ((side1 * side1 + side2 * side2) == (side3 * side3))
    {
        printf("Right angle triangle\n");
    }
    return 0;
    }

b)  In digital world colors are specified in Red-Green-Blue
(RGB) format, with values of R, G, B varying on an integer
scale from 0 to 255. In print publishing the colors are
mentioned in Cyan-Magenta-Yellow-Black (CMYK) format,
with values of C, M, Y, and K varying on a real scale from
0.0 to 1.0. Write a program that converts RGB color to
CMYK color as per the following formulae:

white = max; <br>
cyan = (white - red) / white; <br>
magenta = (white - green) / white; <br>
yellow = (white - blue) / white; <br>
black = 1 - white; 

Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.

    #include <stdio.h>
    int main()
    {
    float red, green, blue;
    float white, cyan, magenta, yellow, black;
    float max;
    printf("Enter Red, Green, Blue values(o to 255): ");
    scanf("%f%f%f", &red, &green, &blue);

    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else
    {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        if (red > green && red > blue)
        {
            printf("Red max\n");
            max = red;
        }
        if (green > red && green > blue)
        {
            printf("green max\n");
            max = green;
        }
        if (blue > red && blue > green)
        {
            printf("blue max\n");
            max = blue;
        }

        white = max;
        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;
    }
    printf("Value of Cyan is %f\n", cyan);
    printf("value of magenta %f\n", magenta);
    printf("Value of yellow is %f\n", yellow);
    printf("Value of Black is %f\n", black);

    return 0;
    }

c) A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.

    #include <stdio.h>
    int main()  
    {
    int hardness, tensile;
    float carbon;
    printf("Enter hardness,carbon content and tensile strength of the steel: ");
    scanf("%d%d%f", &hardness, &tensile, &carbon);

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
    {
        printf("Grade 10\n");
    }
    if (hardness > 50 && carbon < 0.7)
    {
        printf("Grade 9\n");
    }
    if (carbon < 0.7 && tensile > 5600)
    {
        printf("Grade 8\n");
    }
    if (hardness > 50 && tensile > 5600)
    {
        printf("grade 7\n");
    }
    if (hardness > 50 || carbon < 0.7 || tensile > 5600)
    {
        printf("Grade 6\n");
    }
    else
    {
        printf("Grade 5\n");
    }
    return 0;
    }

d) The Body Mass Index (BMI) is defined as ratio of the weight
of a person (in kilograms) to the square of the height (in
meters). Write a program that receives weight and height,
calculates the BMI, and reports the BMI category.

    #include <stdio.h>
    int main()
    {
    float weight, height, bmi;
    printf("Enter Weight(kilograms) and height(meters): ");
    scanf("%f%f", &weight, &height);
    bmi = weight / (height * height);
    printf("Body Mass Index = %f\n", bmi);
    if (bmi < 15)
    {
        printf("BMI Category: Starvation\n");
    }
    else if (bmi < 17.5)
    {
        printf("BMI Category: Anorexic\n");
    }
    else if (bmi < 18.5)
    {
        printf("BMI Category: Underweight\n");
    }
    else if (bmi < 24.9)
    {
        printf("BMI Category: Ideal\n");
    }
    else if (bmi < 25.9)
    {
        printf("BMI Category: Overweight\n");
    }
    else if (bmi < 30.9)
    {
        printf("BMI Category: Obese\n");
    }
    else
    {
        printf("BMI Category: Morbidly Obese\n");
    }
    return 0;
    }

E) Attempt the following questions:

a) (a) Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.

    #include <stdio.h>
    int main()
    {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    ch >= 97 && ch <= 122 ? printf("Character is lowercase alphabet\n") : printf("Character is not lowercase alphabet\n");   
    return 0;
    }

(2) Whether a character entered through the keyboard is a
special symbol or not. 

    #include <stdio.h>
    int main()
    {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127 ? printf("Character is special symbols\n") : printf("Character is not special symbols\n");
    return 0;
    }

b) Write a program using conditional operators to determine
whether a year entered through the keyboard is a leap year or
not.

    #include<stdio.h>
    int main()
    {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    year % 400 == 0 && year % 100 == 0 || year % 100 != 0 && year % 4 == 0 ? printf("Leap Year\n") : printf("Not a leap year\n");
    return 0;
    }

c) Write a program to find the greatest of three numbers entered
through the keyboard. Use conditional operators. 

    #include <stdio.h>
    int main()
    {
    int n1, n2, n3, great;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    great = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    printf("Greatest number is: %d", great);
    return 0;
    }

d) Write a program to receive value of an angle in degrees and
check whether sum of squares of sine and cosine of this angle
is equal to 1.

    #include<stdio.h>
    #include<math.h>
    int main()
    {
    float angle,sum;
    printf("Enter angle in degree: ");
    scanf("%f", &angle);
    angle = angle * (3.14 / 180);
    sum =  pow (sin(angle), 2) + pow (cos(angle), 2);
    if (sum == 1)
    {
        printf ("sum of squares of sine and cosine is equal to 1");
    }
    else
    {
        printf ("sum of squares of sine and cosine is not equal to 1");
    }
    return 0;
    }

e) Rewrite the following programs using conditional operators.

    #include<stdio.h>
    int main()
    {
    float sal ;
    printf ( "Enter the salary" ) ;
    scanf ( "%f", &sal ) ;
    if ( sal >= 25000 && sal <= 40000 )
    printf ( "Manager\n" ) ;
    else
    if ( sal >= 15000 && sal < 25000 )
    printf ( "Accountant\n" ) ;
    else
    printf ( "Clerk\n" ) ;
    return 0 ;
    }           

## 
    #include<stdio.h>
    int main()
    {
    float sal,jobtitle;
    printf("Enter Salary: ");
    scanf("%f", &sal);
    jobtitle = sal >= 25000 && sal <= 40000 ? printf("Manager\n") : sal >= 15000 && sal < 25000 ? printf("Accountant\n") : printf("Clerk\n");
    return 0;
    }
    