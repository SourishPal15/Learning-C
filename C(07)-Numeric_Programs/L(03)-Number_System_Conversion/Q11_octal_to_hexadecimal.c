/* Q.11) Write a program to convert an octal number to
its equivalent hexadecimal number */

#include <stdio.h>

int OctalToDecimal(int octal)
{
    int digit, decimal = 0, place = 1;
    while (octal != 0)
    {
        digit = octal % 10;
        decimal = decimal + (digit * place);
        place = place * 8;
        octal = octal / 10;
    }
    return decimal;
}

void DecimalToHexadecimal(int n)
{
    int rem, i = 0;
    char hex[50];

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
}

int main()
{
    int n, digit, valid = 1, temp;
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
        temp = OctalToDecimal(n);
        DecimalToHexadecimal(temp);
    }

    return 0;
}