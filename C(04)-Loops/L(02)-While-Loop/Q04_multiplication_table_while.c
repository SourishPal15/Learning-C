/* Q.4) Using while loop print the multiplication table of a number */

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----Multiplication Table of %d----\n", n);

    i = 1;
    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}