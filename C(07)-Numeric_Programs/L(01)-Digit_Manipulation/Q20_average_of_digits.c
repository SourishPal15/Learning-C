/* Q.20) Find the average of all the digits in a number.

Example:
Input: 583294

Sum of digits = 5 + 8 + 3 + 2 + 9 + 4 = 31
Number of digits = 6

Average = 31 / 6 = 5.167

Output:
Average of digits = 5.167 */

#include <stdio.h>

int main()
{
    int n, digit, sum = 0, count = 0;
    float average;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        count++;

        n = n / 10;
    }

    average = (float)sum / count;

    printf("Average of digits = %.3f", average);

    return 0;
}