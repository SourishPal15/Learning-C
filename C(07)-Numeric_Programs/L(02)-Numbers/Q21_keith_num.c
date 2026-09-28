/* Q.21) Check whether a number is keith number or not
A Keith number is a number that appears in the sequence generated
from its own digits.

How it works:

Take the digits of the number as the starting terms.
Add the previous terms to generate the next term.
If the original number appears in this sequence, it is a Keith number.

Example: 197

Starting digits: 1, 9, 7

Now add the previous 3 terms:

1 + 9 + 7 = 17
9 + 7 + 17 = 33
7 + 17 + 33 = 57
17 + 33 + 57 = 107
33 + 57 + 107 = 197 ← original number

Therefore, 197 is a Keith number. */

#include <stdio.h>

int countDigits(int n)
{
    int count = 0;

    while(n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int isKeith(int n)
{
    int digits, temp, i, j;
    int sum;

    digits = countDigits(n);

    int arr[20];

    temp = n;

    /* Store digits in reverse order */
    for(i = digits - 1; i >= 0; i--)
    {
        arr[i] = temp % 10;
        temp = temp / 10;
    }

    while(1)
    {
        sum = 0;

        /* Add the previous terms */
        for(i = 0; i < digits; i++)
        {
            sum = sum + arr[i];
        }

        if(sum == n)
            return 1;

        if(sum > n)
            return 0;

        /* Shift terms to the left */
        for(j = 0; j < digits - 1; j++)
        {
            arr[j] = arr[j + 1];
        }

        /* Add the new term */
        arr[digits - 1] = sum;
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isKeith(n))
        printf("%d is a Keith Number.", n);
    else
        printf("%d is not a Keith Number.", n);

    return 0;
}