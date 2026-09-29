/* Q.18) Remove all the zero digits from a number.

Example:
Input: 10203040

After removing all zero digits:
1234

Output:
Number after removing zeros = 1234 */

#include <stdio.h>

int Reverse(int n)
{
    int rev = 0, digit;

    while(n > 0)
    {
        digit = n % 10;

        if(digit != 0)
            rev = rev * 10 + digit;

        n = n / 10;
    }

    return rev;
}

int main()
{
    int n, digit, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = Reverse(n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit != 0)
            result = result * 10 + digit;

        n = n / 10;
    }

    printf("Number after removing zeros = %d", result);

    return 0;
}