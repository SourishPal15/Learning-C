/* Q.3) Write a program to convert a decimal number 
to its octal equivalent */

#include <stdio.h>

int main()
{
    int n, octal = 0, place = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 8;
        octal = octal + rem * place;
        n = n / 8;
        place = place * 10;
    }

    printf("Octal number = %d", octal);

    return 0;
}