/* Q.14) Given three sides of a triangle, check whether the triangle
is right-angled or not */

/* We have to use Pythagoras Theorem here, but before that we have
to find the longest side which is hypotenuse */

#include <stdio.h>

int main()
{
    int a, b, c, hypotenuse, base, height;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= 0 || b <= 0 || c <= 0) // checks if triangle is valid or not
    {
        printf("Invalid triangle!");
    }
    else if(a+b <= c || a+c <= b || b+c <= a) // checks if the sides can form a triangle or not
    {
        printf("The given sides do not form a triangle.");
    }
    else
    {
        if(a >= b && a >= c)
        {
            hypotenuse = a;
            base = b;
            height = c;
        }
        else if(b >= a && b >= c)
        {
            hypotenuse = b;
            base = a;
            height = c;
        }
        else
        {
            hypotenuse = c;
            base = a;
            height = b;
        }

        if(hypotenuse*hypotenuse == base*base + height*height)
            printf("Yes, it is a Right Angled Triangle.");
        else
            printf("No, it is not a Right Angled Triangle.");
    }

    return 0;
}