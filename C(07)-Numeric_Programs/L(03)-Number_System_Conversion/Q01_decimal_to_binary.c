/* Q.1) Write a program to convert a decimal number to 
its binary equivalent */

#include <stdio.h> // works correctly for positive decimal numbers

int main()
{
    int decimal, binary=0, remainder, place=1, temp;
    printf("Enter a Decimal number: ");
    scanf("%d",&decimal);

    temp = decimal; 

    while(temp!=0)
    {
        remainder = temp % 2; 
        binary = binary + (remainder * place);
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary equivalent of %d is = %d", decimal,binary);
    
    return 0;
}

/*

Another solution that works for both positive and negative number, 
this solution uses the signed and unsigned forms of the 8-bit binary

#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if(n < 0) // checks if number is negative or not
    {
        printf("Signed Binary = 1"); // 1 denotes negative sign 

        n = -n;

        while(n > 0)
        {
            remainder = n % 2;
            binary = binary + remainder * place;
            place = place * 10;
            n = n / 2;
        }

        printf("%07d", binary); // %07d means showing in 8-bit form
    }
    else
    {
        printf("Signed Binary = 0"); // 0 denotes positive sign 

        while(n > 0)
        {
            remainder = n % 2;
            binary = binary + remainder * place;
            place = place * 10;
            n = n / 2;
        }

        printf("%07d", binary);
    }

    return 0;
}

*/