/* Q.3) Using while loop print the sum of numbers from 1 to N */

#include <stdio.h>

int main()
{
    int i, n, s = 0;
    printf("Enter the last term (N): ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        s = s + i;
        i++;
    }

    printf("Sum of numbers from 1 to %d = %d", n, s);
    return 0;
}