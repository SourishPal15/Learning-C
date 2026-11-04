/* Q.4) Write a C program to determine the area and circumference of a circle */

#include <stdio.h>

int main()
{
    float radius, area, circumference;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    area = 22.0/7.0 * radius * radius;
    circumference = 2.0 * 22.0/7.0 * radius;

    printf("Area of circle = %.2f\n", area); // upto 2 decimal places
    printf("Circumference of circle = %.2f", circumference); // upto 2 decimal places

    return 0;
}