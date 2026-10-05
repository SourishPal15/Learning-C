/* Q.10) Write a program to convert a hexadecimal number 
to its binary equivalent */

#include <stdio.h>
#include <ctype.h>

int HexadecimalToDecimal(char hex[])
{
    int decimal = 0, i = 0, digit;

    while(hex[i] != '\0')
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';

        else if(hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;

        else if(hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;

        else
            return -1;

        decimal = decimal * 16 + digit;
        i++;
    }

    return decimal;
}

int DecimalToBinary(int decimal)
{
    int binary=0, place=1, digit;
    while(decimal!=0)
    {
        digit = decimal % 2;
        binary = binary + (digit * place);
        place = place * 10;
        decimal = decimal / 2;
    }
    return binary;
}

int main()
{
    char hex[50];
    int decimal;

    printf("Enter a Hexadecimal number: ");
    scanf("%s", hex);

    decimal = HexadecimalToDecimal(hex);

    if(decimal == -1)
        printf("Invalid Hexadecimal number!");
    else
        printf("Binary Number = %d", DecimalToBinary(decimal));

    return 0;
}