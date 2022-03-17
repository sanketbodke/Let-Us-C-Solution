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
