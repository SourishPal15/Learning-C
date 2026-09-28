/* Q.18) Write a program to print the Ulam Sequence

The Ulam sequence starts with 1 and 2.
Each following term is the smallest positive integer
that can be written as the sum of two distinct earlier
terms in exactly one way.

Example:
1, 2, 3, 4, 6, 8, 11, 13, 16, 18, ...

For example:
3 = 1 + 2
4 = 1 + 3
6 = 2 + 4
8 = 2 + 6
11 = 3 + 8 */

#include <stdio.h>

int isUlam(int n, int a[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(a[i] + a[j] == n)
                count++;
        }
    }

    return count == 1;
}

void Ulam(int n)
{
    int a[n];

    a[0] = 1;
    a[1] = 2;

    printf("%d %d ", a[0], a[1]);

    int size = 2;
    int candidate = 3;

    while(size < n)
    {
        if(isUlam(candidate, a, size))
        {
            a[size] = candidate;
            printf("%d ", candidate);
            size++;
        }

        candidate++;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Ulam Sequence: ");

    if(n >= 2)
        Ulam(n);
    else if(n == 1)
        printf("1");

    return 0;
}