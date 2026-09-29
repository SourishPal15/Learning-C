/* Q.16) Check whether all the digits in a number are unique.

A number has unique digits if no digit occurs more than once.

Example:
Input: 583294
Digits: 5, 8, 3, 2, 9, 4

All digits are different.

Output:
All digits are unique.

Example:
Input: 583284
The digit 8 occurs more than once.

Output:
All digits are not unique. */

#include <stdio.h>

int main()
{
    int n, digit1, digit2, temp;
    int unique = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        digit1 = temp % 10;
        n = temp / 10;

        while(n > 0)
        {
            digit2 = n % 10;

            if(digit1 == digit2)
            {
                unique = 0;
                break;
            }

            n = n / 10;
        }

        if(unique == 0)
            break;

        temp = temp / 10;
    }

    if(unique == 1)
        printf("Yes, All digits are unique.");
    else
        printf("No, All digits are not unique.");

    return 0;
}