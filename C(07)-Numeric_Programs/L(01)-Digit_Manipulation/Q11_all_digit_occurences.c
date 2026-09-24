/* Q.11) Count all the occurences of all the digits present in a number */

#include <stdio.h>

int reverse(int n)
{
    int d, r = 0;

    while(n != 0)
    {
        d = n % 10;
        r = (r * 10) + d;
        n = n / 10;
    }

    return r;
}

int main()
{
    int n, temp, d, digit, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Occurrences of digits in %d:\n", n);

    for(digit = 0; digit <= 9; digit++)
    {
        temp = reverse(n);
        count = 0;

        while(temp != 0)
        {
            d = temp % 10;

            if(d == digit)
                count++;

            temp = temp / 10;
        }

        if(count != 0)
            printf("%d occurs %d time(s)\n", digit, count);
    }

    return 0;
}