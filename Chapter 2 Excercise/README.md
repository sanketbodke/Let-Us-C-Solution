## Chapter 2 Exercises 📑

A) Point out the error, if any, in the following C statements.

    a) X = (y + 3);
    Valid
    
    b) Cir = 2 * 3.141593 * 2;
    Valid
    C) char = ‘3’;
    Error: char is a reserved keyword and cannot be     used as a variable. We cannot assign anything to     a keyword.

    d) 4/ 3 * 3.14 * r * r * r = vol_of_sphere
    Error: lvalue required, We cannot take any     expression on the left of the assignment operator.

    e) volume = a3; 
    Error: a3 does not specify any operation.

    f) area = 1/2  * base * height;
    Valid
    
    g) si = p * r * n/100;
    Valid;

    h) area of circle = 3.14 * r * r;
    Error: space is not allowed in variable names.

    i) peri_of_tri = a + b + c;
    Valid

    j) slope = ( y2 - y1) ÷ (x2 - x1);
    Error: This '÷' is not a valid operator.

    k) 3 = b = 4 = a;
    Error: lvalue required. Left side should not have any constant value or any expression.

    l) count = count + 1;
    Valid

    m) char ch = ‘25 Apr 12’
    Error: Spaces not allowed in variable names and Character constant allow only one character.


B) Evaluate the following expression and show their hierarchy.

    a)

    ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y;
    ( a = 3, b = 2, x = 5, y = 4 assume ans to be an int)

    5 * 2 * 2 * 5 - 3 * 3 * 4 * 4 - 8 * 2 * 2 *  5 + 10 * 3 * 4;
    10 * 10 - 9 * 16 - 16 * 10 + 30 * 4;
    100 - 144 - 160 + 120;
    - 44 - 160 + 120;
    - 204 + 120;
    - 84

    b)
    res = 4 * a * y / c - a * y / c;         
    ( a = 4, y = 1, c = 3, assume res to be an int )

    4 * 4 * 1 / 3 - 4 * 1 / 3;
    16 * 1 / 3 - 4 / 3;
    16 / 3 - 4 / 3;
    5 - 1;
    4
     
    c) 
    s = c + a * y * y / b;
    ( a = 2.2, b = 0.0, c = 4.1, y = 3.0, assume s to be an float )

    s = 4.1 + 2.2 * 3.0 * 3.0 / 0.0
    4.1 + 6.6 * 3.0 / 0.0
    4.1 + 19.8 / 0.0
    Here we cannot divide by 0


    d)
    R = x * x + 2 * x + 1 / 2 * x * x + x + 1;
    (x = 3.5, assume R to be an float)

    R = 3.5 * 3.5 + 2 * 3.5 + 1 / 2 * 3.5 * 3.5 + 3.5 + 1   ( * operation )
    12.25 + 2 * 3.5 + 1/2  * 3.5 * 3.5 + 3.5 + 1            ( * operation )
    12.25 + 7.0 + 1/2 * 3.5 * 3.5 + 3.5 + 1                 ( * operation )
    12.25 + 7.0 + 1 / 7.0 * 3.5 + 3.5 + 1                   ( * operation )
    12.25 + 7.0 + 1 / 24.5 + 3.5 + 1                        ( / operation )
    12.25 + 7.0 + 0.0408 + 3.5 + 1                          ( + operation )
    19.25 + 0.0408 + 3.5 + 1                                ( + operation )
    19.29081 + 3.5 + 1                                      ( + operation )
    22.7908 + 1                                             ( + operation )
    23.7908  



C) Indicate the order in which the following expressions would be evaluated:

    a)

    g = 10 / 5 / 2 / 1;
    10 / 5 / 2 / 1       ( / operation )
    2 / 2 / 1            ( / operation )
    1 / 1                ( / operation )
    1


    b)

    b = 3 / 2 + 5 * 4 / 3;
    3 / 2 + 5 * 4 / 3        ( * operation )
    3 / 2 + 20 / 3           ( / operation )
    3 / 2 + 6                ( / operation )
    1 + 6                    (+ operation  )
    7
 
    c)

    a = b = c = 3 + 4;
    a = b = c = 3 + 4     ( + operation )
    7

    d)

    X = 2 - 3 + 5 * 2 / 8 % 3;
    2 - 3 + 5 * 2 / 8 % 3       ( * operation )
    2 - 3 + 10 / 8 % 3          ( / operation )
    2 - 3 + 1 % 3               (% operation  )
    2 - 3 + 1                   ( - operation )
    - 1 + 1                     ( + operation )
    0

    e)

    z = 5 % 3 / 8 * 3 + 4;
    5 % 3 / 8 * 3 + 4         ( *operation )
    5 % 3 / 24 + 4            ( % operation )
    2 / 24 + 4                ( / operation )
    0 + 4                     ( + operation )  
    4

    f)

    y = z = -3 % -8 / 2 + 7;
    -3 % -8 / 2 + 7          ( % operation )
    -3 / 2 + 7               ( / operation )
    -1 + 7                   ( + operation )
     6


D) What will be the output of the following programs:
 
    a)

    #include<stdio.h>
    int main()
    {
    int i = 2,j = 3,k,l;
    float a,b;
    k = i / j * j;
    l = j / i * i;
    a = i / j * j;
    b = j / i * i;
    printf("%d %d %f %f", k,l,a,b);
    return 0;
    }

    Output : -  0 2 0.000000 2.
    
    b)

    #include<stdio.h>
    int main()
    {
    int a,b,c,d;
    a = 2 % 5;
    b = -2 % 5;
    c = 2 % -5;
    d = -2 % -5;
    printf("a = %d b = %d c = %d d = %d\n", a,b,c,d);
    return 0;
    }

    Output : a = 2 b = -2 c = 2 d = -2

    c)

    
    #include<stdio.h>
    int main()
    {
    int a = 5, b = 2;
    int c, d;
    c = a % b;
    d = a / 2;
    printf("%d %d\n", d);
    return 0;
    }
 
    // Output Error: invalid operands to binary % (have 'float' and 'float')
    // modulus operator (%) cannot be applied on a float.
    // use int to float place

    Output : 2


    d)

    #include<stdio.h>
    int main()
    {
    printf("nn \n\n nn\n");
    printf("nn /n/n nn/n");
    return 0;
    }

    Output : 
    nn 

    nn
    nn /n/n nn/n



    e)

    #include<stdio.h>
    int main()
    {
    int a, b;
    printf("Enter value of a and b ");
    scanf("%d %d", &a, &b);
    printf("a = %d b = %d", a,b);
    return 0;
    }

    Output : Enter value of a and b

E) State whether the following statements are True or False:

    a) * or /, + or - represents the correct hierarchy of arithmetic operators in C.
     True

    b) [ ] and { } can be used in Arithmetic instructions.
     False

    c) Hierarchy decides which operator is used first.
     True

    d) In C, Arithmetic instruction cannot contain constants on left hand side of =.
     True  
  
    e) In C** operator is used for exponentiation operation.
     False

    f) % operator cannot be used with floats.
     True

F) Fill in the blanks:

    a) In y = 10 * x / 2 + z; 10 * x operation will be performed first.

    b) If a is integer variable, a = 11 / 2; will store 5 in a.

    c) The expression, a = 22 / 7 * 5 / 3; would evaluate to 5.

    d) The expression x = - 7 % 2 - 8 would evaluate to -9.

    e) If d is a float the operation d = 2 / 7.0 would store 0.285714 in d.

G) Attempt the following questions.  

 a) If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator '%')

    #include<stdio.h>
    int main()
    {
    int num,num1,num2,num3,num4,num5;
    long int sum;
    printf("\nEnter five digit number: ");
    scanf("%d", &num);
 
    num1 = num % 10;
    num = num / 10;
 
    num2 = num % 10;
    num = num / 10;
 
    num3 = num % 10;
    num = num / 10;
 
    num4 = num % 10;
    num = num / 10;
    
    num5 = num % 10;
    sum = num1 + num2 + num3 + num4 + num5;
    printf("Sum of number: %ld\n", sum);
    return 0;  
    }

b) Write a program to receive Cartesian coordinates (x, y) of a point
and convert them into polar coordinates (r, q).
Hint: r = sqrt(x² + y²) and q=tan¹ (y/x)

    #include<stdio.h>
    #include<math.h>
    int main()
    {
    float x,y,r, theta, theta2;
    printf("\nEnter x and y coordinates: ");
    scanf("%f %f", &x,&y); 
 
    r = sqrt(x * x + y * y);
    theta = tan(y/x);    //Radian
    theta2 = atan(y/x);
    
    // convert to degrees
    theta = theta * 180.0 / 3.14;
    printf("Polar Coordinates(r, theta): %f %f %f", r,theta, theta2);  
    return 0;
    }

c) Write a program to receive values of latitude (L1, L2) and longitude (G1, G2), in degrees, of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles is:
D = 3963 cos¹ (sin L1 sin L2 + cos L1 cos L2 * cos (G2-G1 ) )

    #include<stdio.h>
    #include<math.h>
    int main()
    {
    float lat1, lat2, long1, long2, D;
    printf("\nEnter a value of latitude1 and latitude2: ");
    scanf("%f%f", &lat1, &lat2);
 
    printf("\nEnter a value of longitude1 and longitude2: ");
    scanf("%f%f", &long1, &long2);
 
    //Convert degrees to Radian
 
    lat1 = lat1 * (3.14/180.0);
    lat2 = lat2 * (3.14/180.0);
    
    long1 = long1 * (3.14/180.0);
    long2 = long2 * (3.14/180.0);
 
    D = 3963 * acos (sin (lat1) * sin (lat2) + cos (lat1) * cos (lat2) * cos (long2 - long1));
    printf("Distance in nautical miles = %f", D);
    return 0;
    }

d) Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula: wcf = 35.74 +0.6215t+ (0.4275t-35.75) * 0.16 where t is the temperature and v is the wind velocity. Write a program to receive values of t and v and calculate wind chill factor.
(wcf).

    #include<stdio.h>
    #include<math.h>
    int main()
    {
    float t,v,wcf;
    printf("\nEnter temperature(t) and wind velocity(v): ");
    scanf("%f%f", &t,&v);
 
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v,0.16);
    
    printf("wind chill factore: %f", wcf);
    return 0;
 
    }

e) If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.

    #include<stdio.h>
    #include<math.h>
    int main()
    {
    float angle,s,c,t;
    printf("\nEnter angle: ");
    scanf("%f",&angle);
 
    /* convert angle to radians */
    angle = angle * (3.14 / 180);
 
    s = sin(angle);
    c = cos(angle);
    t = tan(angle);
    printf(" sin = %f cos = %f tan = %f\n", s,c,t);
    return 0;
    }

f) Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.

    #include<stdio.h>
    int main()
    {
    int c,d,temp;
    printf("\nEnter C and D numbers: ");
    scanf("%d %d", &c,&d);
    
    temp = c;
    c = d;
    d = temp;
    printf("C = %d D = %d\n", c,d);
    return 0;
    }
    
    
    


