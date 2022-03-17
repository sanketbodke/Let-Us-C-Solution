/* The Body Mass Index (BMI) is defined as ratio of the weight
of a person (in kilograms) to the square of the height (in
meters). Write a program that receives weight and height,
calculates the BMI, and reports the BMI category: */

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
