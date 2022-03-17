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
