/* Q.4) Using do-while loop print the multiplication table of a number */

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----Multiplication Table of %d----\n", n);

    i = 1;
    do
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}