/*Q.5) Write a program to convert an Octal number to
its Decimal equivalent */

#include <stdio.h>

int main()
{
    int n, dec = 0, place = 1, digit, valid = 1, temp;
    printf("Enter an Octal nuumber: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;

        if (!(digit >= 0 && digit <= 7))
        {
            valid = 0;
            break;
        }

        temp = temp / 10;
    }

    if (valid == 0)
        printf("Invalid Octal Number!");
    else
    {
        temp = n;

        while (temp != 0)
        {
            digit = temp % 10;
            dec = dec + (digit * place);
            place = place * 8;
            temp = temp / 10;
        }

        printf("Decimal Number = %d", dec);
    }

    return 0;
}