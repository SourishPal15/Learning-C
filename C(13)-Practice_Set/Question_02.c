/* Q.2) Determine the roots of the quadratic equation ax^2 + bx + c */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2, determinant;
    printf("Enter values of a,b,c respectively for quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a!=0)
    {
        printf("Quadratic Equation: (%d)x^2 + (%d)x + (%d)\n", a,b,c);

        determinant = sqrt((b*b) - 4*a*c);
        x1 = (-b + determinant) / 2.0 * a;
        x2 = (-b - determinant) / 2.0 * a;
        
        if(determinant > 0)
            printf("Two distinct and real roots: %g and %g", x1,x2);
        else if (determinant == 0)
            printf("Two equal and real roots: %g and %g", x1,x2);
        else 
            printf("Two complex and imaginary roots: %g and %g", x1,x2);
    }
    else 
        printf("Value of a cannot be 0, Invalid Quadratic Equation");

    return 0;
}