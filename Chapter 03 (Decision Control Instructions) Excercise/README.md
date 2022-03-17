## Chapter 3 Exercises 📑

A) What will be the output of the following programs:
 
  a)  
 
     #include <stdio.h>           
     int main( )                  
     {                            
     int a = 300, b, c ;          
     if ( a >= 400 )              
     b = 300 ;                    
     c = 200 ;                    
     printf ( "%d %d\n", b, c ); 
     return 0 ;                   
     }
 
    Output: b will contain some garbage value and c will be equal to 200
 
  b)
 
     #include <stdio.h> 
     int main( )
     {
     int x = 10, y = 20 ;
     if ( x == y ) ;
     printf ( "%d %d\n", x, y ) ;
     return 0 ;
     }
 
     Output: 10 20
 
  C)
 
     # include <stdio.h>
     int main( )
     {
     int x = 3 ;
     float y = 3.0 ;
     if ( x == y )
     printf ( "x and y are equal\n" ) ;
     else
     printf ( "x and y are not equal\n" ) ;
     return 0 ;
     }
 
     Output: x and y are equal
 
  d)     
 
    # include <stdio.h>
    int main( )
    {
    int x = 3, y, z ;
    y = x = 10 ;
    z = x < 10 ;
    printf ( "x = %d y = %d z = %d\n", x, y, z ) ;
    return 0 ;
    }
 
    Output: x=10 y=10 z=0
 
  e)
 
    # include <stdio.h> 
    int main( )
    {
    int i = 65 ;
    char j = 'A' ;
    if ( i == j )
    printf ( "C is WOW\n" ) ;
    else
    printf( "C is a headache\n" ) ;
    return 0 ;
    }
 
    Output: C is WOW
 
 
B) Point out the error, if any, in the following programs:
 
  a) 
 
    # include <stdio.h>
    int main( )
    {    
    float a = 12.25, b = 12.52 ;
    if ( a = b )
    printf ( "a and b are equal\n" ) ;
    return 0 ; 
    }
 
    Answer: No Errors
 
  b)
 
     #include <stdio.h>
     int main( )
     {
     int j = 10, k = 12 ;
     if ( k >= j )
     {
        {
         k = j ;
         j = k ;
        }   
    }
    return 0 ;
    }
 
    Answer: No Errors
 
   c)
 
     #include <stdio.h>
     int main( )
     {  
     if ( 'X' < 'x' )
     printf ( "ascii value of X is smaller than that of x\n" ) ;
     }
 
     Answer: No Errors
 
   d) 
 
     #include <stdio.h>
     int main( )
     {
     int x = 10 ;
     if ( x >= 2 ) then
     printf ( "%d\n", x ) ;
     return 0 ;
     }
 
     Answer: then is not used in C
 
   e)
 
     #include <stdio.h>
     int main( )
     {
     int x = 10, y = 15 ;
     if ( x % 2 = y % 3 )
     printf ( "Carpathians\n" ) ;
     return 0 ;
     }
 
     Answer: = is not used to compare. == is used to compare in C 
 
  f)
 
     #include <stdio.h> 
     int main( )
     {
     int a, b ;
     scanf ( "%d %d", a, b ) ;
     if ( a > b ) ;
     printf ( "This is a game\n" ) ;
     else
     printf ( "You have to play it\n" ) ;
     return 0 ; 
     }
         
     Answer: & before variable in scanf()
 
C) State whether the following statement are True or False.
 
    a) ; is valid statement.
    Answer: False
 
    b) ifs can be nested.
    Answer: True
 
    c) if there are multiple statements in if or else block they should be enclosed within a pair of { }.
    Answer: True 
 
    d) if can occur within an if block but not in the else block.
    Answer: False
 
    e) By default there is only one statement in the if block and only one in the else block.
    Answer: True
  
    f) Nothing happens on execution of a null statement.
    Answer: True 
 
 
D) Match the following pairs.
 
    a) Multiple statements              { }
    
    b) else block                      optional
 
    c) ;                              Null Statement
 
    d) <> <= >= == !=                 Relational operators     
 
    e) ==                             Comparison operator 
 
    f) + - * / %                      Arithmetic operators
 
    g) =                              Assignment operator
 
    h) Default control instruction     sequence
 
    i) Decision control instruction   if - else
 
 
E) Which of the following are valid ifs.
 
    a) if(-25)
    Answer: Invalid
 
    b) if(3.14)
    Answer: Invalid
 
    c) if(a)
    Answer: Invalid
 
    d) if(a + b)
    Answer: Invalid
 
    e) if(a >= b)
    Answer: Valid


F) Attempt the following questions:
 
a) A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.
 
    #include <stdio.h>
    int main()
    {
    int  n1, n2, n3, n4, n5;
    long int rev, num, enteredNum;
    printf("Enter five digit number: ");
    scanf("%d", &num);
 
    enteredNum = num;
 
    n1 = num % 10;
    num = num / 10;
 
    n2 = num % 10;
    num = num / 10;
 
    n3 = num % 10;
    num = num / 10;
 
    n4 = num % 10;
    num = num / 10;
 
    n5 = num % 10;
 
    rev = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5;
    printf("Reverse number is: %ld\n", rev);
    printf("Enter number: %ld\n", num);
 
    printf("rev number is: %ld\n", rev);
 
    if (rev == enteredNum)
    {
        printf("Enter number equal to reverse number: %ld\n");
    }
       
    else
    {
        printf("Enter number not equal to reverse number: %ld\n");
    }
    
    return 0;
 
    }  
 
 
b) If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.
 
    #include<stdio.h>
    int main()
    {
    int ram, shyam, Ajay;
    printf("Enter the age of Ram shyam and ajay: ");
    scanf("%d%d%d", &ram, &shyam, &ajay);
    if (ram < shyam)
    {
        if (ram < Ajay)
        {
            printf("Ram is young");
        }
        
    }
    if (shyam < ram)
    {
        if (shyam < Ajay)
        {
            printf("Shyam is young");
        }
        
    }
    if (Ajay < ram)
    {
        if (Ajay < shyam)
        {
            printf("Ajay is young");
        }
        
    }
    
    return 0;
 
    }
 
c) Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees. 
 
    #include<stdio.h>
    int main()
    {
    int angles, angleA, angleB, angleC;
    printf("Write three angles of triangle: ");
    scanf("%d%d%d", &angleA, &angleB, &angleC);
 
    angles = angleA + angleB + angleC;
    printf("Sum of angles: %d\n", angles);
 
    if (angles == 180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is invalid");
    }
    
    return 0;
     
    }
 
 
d) Write a program to find the absolute value of a number entered through the
keyboard.
 
    #include<stdio.h>
    #include<math.h>
    int main()
    {
    float num;
 
    printf("Enter a Number: ");
    scanf("%f", &num);
    
    num = abs(num);
    printf("abs value of num: %f", num);
    return 0;
    
    }
 
e) Given the length and breadth of a rectangle, write a program
to find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length
= 5 and breadth = 4 is greater than its perimeter.
 
    #include<stdio.h>
    int main()
    {
    int l,b,area,perimeter;
 
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
 
    area = l * b;
    printf("The area of rectangle: %d\n", area);
 
    perimeter = 2 + (l * b);
    printf("The perimeter of rectangle: %d\n", perimeter);
 
    if (area > perimeter)
    {
        printf("The area is greater than perimeter");
    }
    else
    {
        printf("The area is not greater than perimeter");
    }
    
    return 0;
 
    }
 
f) Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight
line.
 
    #include<stdio.h>
    int main()
    {
    int x1,y1,x2,y2,x3,y3,m,n;
    printf("Enter the points x1 and y1: ");
    scanf("%d%d", &x1,&y1);
 
    printf("Enter the points x2 and y2: ");
    scanf("%d%d", &x2,&y2);
 
    printf("Enter the points x3 and y3: ");
    scanf("%d%d", &x3,&y3);
 
    m = y2 - y1 / x2 - x1;
    n = y3 - y2 / x3 - x2;
 
    if (m == n)
    {
        printf("Points fall on straight line");
    }
    else
    {
        printf("Points not fall on straight line");
    }
 
    return 0;
    
    }
 
g) Given the coordinates (x, y) of center of a circle and its
radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions)
 
    #include <stdio.h>
    #include <math.h>
    int main()
    {
    float x, y, radius, a, b, dis;
 
    printf("Enter a center coordinate(x and y): ");
    scanf("%f%f", &x, &y);
 
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
 
    printf("Enter a point coordinate(a and b): ");
    scanf("%f%f", &a, &b);
 
    dis = sqrt(pow(a-x, 2)+pow(b-y,2));
    
 
    if (dis < radius)
    {
        printf("point lie inside of circle");
    }
 
    if (dis > radius)
    {
        printf("point lie outside of circle");
    }
 
    if (dis == radius)
    {
        printf("point lie on the circle");
    }
 
    return 0;
 
    }
 
h) Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or on the origin.
 
    #include <stdio.h>
    int main()
    {
    float x, y;
    printf("Enter a x and y coordinate: ");
    scanf("%f%f", &x, &y);
 
    if (x == 0 && y == 0)
    {
        printf("Points lies on origin");
    }
 
    else
    {
        if (x == 0)
        {
            printf("Point lies on y axis\n");
        }
 
        if (y == 0)
        {
            printf("Point lies on x axis\n");
        }
 
        else
        {
            printf("Point neither lies on any axis, non origin\n");
        }
 
    }
 
    return 0;
 
    }
 
i) According to the Gregorian calendar, it was Monday on the
date 01/01/01. If any year is input through the keyboard write
a program to find out what is the day on 1st January of this
year.   
 
    #include<stdio.h>
    int main()
    {
    int year,leapdays,firstday;
    long int normaldays,totaldays;
 
    printf("Enter a year: ");
    scanf("%d", &year);
 
    normaldays = (year - 1) * 365;
    leapdays = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
 
    totaldays = normaldays + leapdays;
    firstday = totaldays % 7;
 
 
    if (firstday == 0)
    {
        printf("Monday");
    }
 
    if (firstday == 1)
    {
        printf("Tuesday");
    }
 
    if (firstday == 2)
    {
        printf("Wednesday");
    }
 
    if (firstday == 3) 	
    {
        printf("Thursday");
    }
 
    if (firstday == 4)
    {
        printf("Friday");
    }
 
    if (firstday == 5)
    {
        printf("Saturday");
    }
 
    if (firstday == 6)
    {
        printf("Sunday");
    }
    
    return 0;
    
    }
