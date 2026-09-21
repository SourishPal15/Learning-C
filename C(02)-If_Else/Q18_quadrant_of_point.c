/* Q.18) Write a program to input the x and y coordinates of a point and determine
whether it lies in the first, second, third, fourth quadrant, on an axis,
or at the origin */

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if(x == 0 && y == 0)
        printf("The point is at the origin.");
    else if(x == 0)
        printf("The point lies on the Y-axis.");
    else if(y == 0)
        printf("The point lies on the X-axis.");
    else if(x > 0 && y > 0)
        printf("The point lies in the 1st Quadrant.");
    else if(x < 0 && y > 0)
        printf("The point lies in the 2nd Quadrant.");
    else if(x < 0 && y < 0)
        printf("The point lies in the 3rd Quadrant.");
    else
        printf("The point lies in the 4th Quadrant.");

    return 0;
}