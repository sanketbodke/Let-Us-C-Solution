/*
Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:

i) If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.

ii) If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.

iii) If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.
*/

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