/* Q.14) Find the second largest digit in a number.

Example:
Input: 583294
Digits: 5, 8, 3, 2, 9, 4

Largest digit = 9
Second largest digit = 8

Output:
Second largest digit = 8 */

#include <stdio.h>

int main()
{
    int n, digit, largest = -1, secondLargest = -1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit > largest)
        {
            secondLargest = largest;
            largest = digit;
        }
        else if(digit > secondLargest && digit != largest)
        {
            secondLargest = digit;
        }

        n = n / 10;
    }

    if(secondLargest == -1)
        printf("Second largest digit does not exist.");
    else
        printf("Second largest digit = %d", secondLargest);

    return 0;
}