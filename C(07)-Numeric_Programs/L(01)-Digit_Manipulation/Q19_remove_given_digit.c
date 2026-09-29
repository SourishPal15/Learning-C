/* Q.19) Remove a given digit from a number.

Example:
Input: 583294
Digit to remove: 3

After removing 3:
58294

Output:
Number after removing 3 = 58294 */

#include <stdio.h>

int Reverse(int n)
{
    int rev = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n, remove, digit, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the digit to remove: ");
    scanf("%d", &remove);

    n = Reverse(n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit != remove)
            result = result * 10 + digit;

        n = n / 10;
    }

    printf("Number after removing %d = %d", remove, result);

    return 0;
}