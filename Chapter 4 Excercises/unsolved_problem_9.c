/*  Rewrite the following programs using conditional operators.

# include <stdio.h>
int main( )
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
}  */

#include<stdio.h>
int main()
{
    float sal,jobtitle;
    printf("Enter Salary: ");
    scanf("%f", &sal);
    jobtitle = sal >= 25000 && sal <= 40000 ? printf("Manager\n") : sal >= 15000 && sal < 25000 ? printf("Accountant\n") : printf("Clerk\n");
    return 0;
}