/* Q.6) Write a program to convert an octal number to 
its binary equivalent */

#include <stdio.h>

int OctalToDecimal(int octal)
{
    int decimal=0, place=1, digit;
    while(octal!=0)
    {
        digit = octal % 10;
        decimal = decimal + (digit * place);
        place = place * 8;
        octal = octal / 10;
    }
    return decimal;
}

int main()
{
    int n,digit, valid=1, temp, binary=0, place=1;
    printf("Enter an Octal Number: ");
    scanf("%d", &n);

    temp = n;

    while(temp !=0)
    {
        digit = temp % 10;

        if(!(digit >=0 && digit <= 7))
        {
            valid=0;
            break;
        }
        temp = temp / 10;
    }

    if(valid==0)
        printf("Invalid Octal Number!");
    else
    {
        temp = OctalToDecimal(n);

        while(temp !=0)
        {
            digit = temp % 2;
            binary = binary + (digit*place);
            place = place * 10;
            temp = temp / 2;
        }

        printf("Binary number = %d", binary);
    }

    return 0;
}