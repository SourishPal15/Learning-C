/* Q.12) Given the first term (a), difference/multiplier (d) and number of terms 
(n>0) display the first n terms of the arithmetic/geometric progression */

#include <stdio.h>

int main()
{
    int a, d, n, i, choice, term;

    printf("1. Arithmetic Progression (AP)\n");
    printf("2. Geometric Progression (GP)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter difference/multiplier (d): ");
    scanf("%d", &d);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of terms!");
    }
    else if(choice == 1)
    {
        printf("\nArithmetic Progression: ");

        term = a;

        for(i = 1; i <= n; i++)
        {
            printf("%d ", term);
            term = term + d;
        }
    }
    else if(choice == 2)
    {
        printf("\nGeometric Progression: ");

        term = a;

        for(i = 1; i <= n; i++)
        {
            printf("%d ", term);
            term = term * d;
        }
    }
    else
    {
        printf("Invalid choice!");
    }

    return 0;
}