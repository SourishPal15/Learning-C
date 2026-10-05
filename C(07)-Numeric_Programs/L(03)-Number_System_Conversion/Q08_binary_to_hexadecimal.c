/* Q.8) Write a program to convert a binary number to its 
hexadecimal equivalent */

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
    int n,i=0,temp,valid=1,d;
    char hex[50];
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

        while(temp!=0)
        {
            d = temp % 16;

            if(d < 10)
                hex[i] = d + '0';
            else 
                hex[i] = d - 10 + 'A';

            i++;
            temp = temp / 16;
        }

        printf("Hexadecimal Number = ");

        for(i = i-1; i>=0; i--)
        {
            printf("%c", hex[i]);
        }
    }

    return 0;
}