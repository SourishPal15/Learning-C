/* Q.32) Design a Structure Rectangle with length and breadth as its members. Declare two such
rectangles, populate them, and calculate the area and perimeter of these two rectangles
and display the rectangle with minimum area. */

#include <stdio.h>

struct Rectangle
{
    float length;
    float breadth;
};

int main()
{
    struct Rectangle r1, r2;
    float area1, area2, perimeter1, perimeter2;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%f%f", &r1.length, &r1.breadth);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%f%f", &r2.length, &r2.breadth);

    area1 = r1.length * r1.breadth;
    area2 = r2.length * r2.breadth;

    perimeter1 = 2 * (r1.length + r1.breadth);
    perimeter2 = 2 * (r2.length + r2.breadth);

    printf("\n========== Rectangle Details ==========\n");

    printf("\nRectangle 1:");
    printf("\nArea = %.2f", area1);
    printf("\nPerimeter = %.2f\n", perimeter1);

    printf("\nRectangle 2:");
    printf("\nArea = %.2f", area2);
    printf("\nPerimeter = %.2f\n", perimeter2);

    printf("\n========== Rectangle with Minimum Area ==========\n");

    if(area1 < area2)
    {
        printf("Rectangle 1");
        printf("\nLength = %.2f", r1.length);
        printf("\nBreadth = %.2f", r1.breadth);
        printf("\nArea = %.2f", area1);
    }
    else if(area2 < area1)
    {
        printf("Rectangle 2");
        printf("\nLength = %.2f", r2.length);
        printf("\nBreadth = %.2f", r2.breadth);
        printf("\nArea = %.2f", area2);
    }
    else
    {
        printf("Both rectangles have equal areas.");
    }

    return 0;
}