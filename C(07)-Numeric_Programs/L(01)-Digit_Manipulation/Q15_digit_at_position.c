/* Q.15) Find the digit at a given position in a number.

Example:
Input: 583294
Position: 3

Number:   5 8 3 2 9 4
Position: 1 2 3 4 5 6

The digit at position 3 is 3.

Output:
Digit at position 3 = 3 */

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
    int n, pos, digit, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the position: ");
    scanf("%d", &pos);

    n = Reverse(n);

    for(i = 1; i <= pos; i++)
    {
        digit = n % 10;
        n = n / 10;
    }

    printf("Digit at position %d = %d", pos, digit);

    return 0;
    
}