/* q.7) Write a program to convert a decimal number to
its hexadecimal equivalent */

#include <stdio.h>

int main()
{
    int n, rem, i = 0;
    char hex[50];

    printf("Enter a Decimal number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 16;

        if(rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        i++;
        n = n / 16;
    }

    printf("Hexadecimal Number = ");

    for(i = i - 1; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }

    return 0;
}