/* In digital world colors are specified in Red-Green-Blue
(RGB) format, with values of R, G, B varying on an integer
scale from 0 to 255. In print publishing the colors are
mentioned in Cyan-Magenta-Yellow-Black (CMYK) format,
with values of C, M, Y, and K varying on a real scale from
0.0 to 1.0. Write a program that converts RGB color to
CMY */

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

