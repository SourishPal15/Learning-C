/* Q.4) Write a program to convert a binary number to 
its octal equivalent */

#include <stdio.h>

int BinaryToDecimal(int binary)
{
    int decimal=0, digit, place=1;
    while(binary!=0)
    {
        digit = binary % 10;
        decimal = decimal + (digit * place);
        place = place * 2;
        binary = binary / 10;
    }
    return decimal;
}

int main()
{
    int n, temp, d, valid=1, place=1, octal=0;
    printf("Enter a Binary number: ");
    scanf("%d", &n);

    temp = n;

    while(temp!=0)
    {
        d = temp % 10;

        if( d != 0 && d != 1)
        {
            valid=0;
            break;
        }
        temp = temp / 10;
    }

    if(valid==0)
        printf("Invalid Binary number!");
    else
    {
        temp = BinaryToDecimal(n);

        while(temp !=0)
        {
            d = temp % 8;
            octal = octal + (d * place);
            place = place * 10;
            temp = temp / 8;
        }

        printf("Octal number = %d", octal);
    }

    return 0;
}