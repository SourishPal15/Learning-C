/* Q.26) Write a recursive program to count the number of digits of a positive
integer number */

#include <stdio.h>

int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer!\n");
        return 1;
    }

    count = countDigits(n);

    printf("Number of digits: %d\n", count);

    return 0;
}