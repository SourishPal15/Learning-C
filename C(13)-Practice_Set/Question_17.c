/* Q.17) Compute the approximate value of pi considering the first n
(n > 0) terms of the Taylor series for pi

The Taylor Series for approximation of pi is: 

    pi = 4 × (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 - ...) */

#include <stdio.h>

int main()
{
    int n, i;
    double pi = 0.0, sign = 1.0;

    printf("Enter the number of terms (n > 0): ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input! Please enter a positive integer.");
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            pi = pi + sign / (2*i + 1);
            sign = -sign;
        }

        pi = pi * 4;

        printf("Approximate value of PI = %.10lf", pi);
    }

    return 0;
}