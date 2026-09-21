/* Q.20) Write a program to input a, b, and c for the quadratic equation:

ax^2 + bx + c = 0 

Calculate the discriminant:

D = b^2 - 4ac

Then determine whether the equation has:

Two distinct real roots
Two equal real roots
No real roots */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D;
    float root1, root2;
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0)
        printf("It is not a quadratic equation.");
    else
    {
        D = (b * b) - (4 * a * c);
        if(D > 0)
        {
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);

            printf("Two distinct real roots.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f", root2);
        }
        else if(D == 0)
        {
            root1 = -b / (2 * a);

            printf("Two equal real roots.\n");
            printf("Root = %.2f", root1);
        }
        else
            printf("No real roots.");
    }

    return 0;
}

/* In this program  we have included a new library called <math.h>
this, library has different types of mathematical functions that would make our
program easier than manually writing the code of the mathematical functions
from scratch */