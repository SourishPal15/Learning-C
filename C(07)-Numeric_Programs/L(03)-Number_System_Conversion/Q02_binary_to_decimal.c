/* Q.2) Write a program to convert a binary number to its
decimaml equivalent */

#include <stdio.h> // works for positive binary number

int main()
{
    int binary, temp, decimal = 0, place = 1, digit, valid = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while(temp != 0)
    {
        digit = temp % 10;

        if(digit != 0 && digit != 1)
        {
            valid = 0;
            break;
        }

        temp = temp / 10;
    }

    if(valid == 0)
    {
        printf("Invalid binary number.");
    }
    else
    {
        temp = binary;

        while(temp != 0)
        {
            digit = temp % 10;
            decimal = decimal + (digit * place);
            place = place * 2;
            temp = temp / 10;
        }

        printf("Decimal equivalent of %d = %d", binary,decimal);
    }

    return 0;
}

/*

Another solution that works with both poitive and negative
binary numbers:

#include <stdio.h>

int main()
{
    int binary, decimal = 0, place = 1, digit;
    int negative = 0, valid = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    if(binary < 0)
    {
        negative = 1;
        binary = -binary;
    }

    while(binary > 0)
    {
        digit = binary % 10;

        if(digit != 0 && digit != 1)
        {
            valid = 0;
            break;
        }

        decimal = decimal + digit * place;
        place = place * 2;
        binary = binary / 10;
    }

    if(valid == 0)
    {
        printf("Invalid binary number.");
    }
    else
    {
        if(negative == 1)
            decimal = -decimal;

        printf("Decimal number = %d", decimal);
    }

    return 0;
}

*/