/* Q.6) Take a number and swap the first and last digits of that number
and then print the modified number */

#include <stdio.h>

int main()
{
    int n, c = 0, temp, f, m, l, new, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        c++;
        temp = temp / 10;
    }

    if(c == 1 || n == 0)
    {
        printf("%d has only 1 digit so the operation cannot be done", n);
        return 0;
    }

    // Calculate 10^(c-1) without using pow() from <math.h>
    while(c > 1)
    {
        divisor = divisor * 10;
        c--;
    }

    f = n / divisor;
    l = n % 10;
    m = (n % divisor) / 10;

    new = (l * divisor) + (m * 10) + f;

    printf("New modified number = %d\n", new);

    return 0;
}