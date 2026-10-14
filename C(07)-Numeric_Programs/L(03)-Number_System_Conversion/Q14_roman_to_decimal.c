/* Q.14) Write a program to take a roman number as input and then convert
the roman number into its decimal equivalent */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char roman[50];
    int values[256] = {0};
    int i, num = 0;

    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    printf("Enter a Roman numeral: ");
    scanf("%49s", roman);

    for (i = 0; roman[i] != '\0'; i++)
    {
        roman[i] = toupper((unsigned char)roman[i]);
    }

    for (i = 0; roman[i] != '\0'; i++)
    {
        if (values[(unsigned char)roman[i]] == 0)
        {
            printf("Invalid Roman numeral!\n");
            return 0;
        }

        if (values[(unsigned char)roman[i]] < values[(unsigned char)roman[i + 1]])
        {
            num -= values[(unsigned char)roman[i]];
        }
        else
        {
            num += values[(unsigned char)roman[i]];
        }
    }

    printf("Decimal number: %d\n", num);

    return 0;
}