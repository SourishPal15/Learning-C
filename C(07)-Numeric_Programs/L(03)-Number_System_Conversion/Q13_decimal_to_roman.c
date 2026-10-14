/* Q.13) Write a program to convert a decimal number to its equivalent
roman representation

Note: 3999 is the maxiumum limit to represent a roman number conventionlly 
3999 is the largest number representable using the conventional
Roman numeral rules without additional notation.

The symbol M represents 1000. Under the conventional rules used by
our program, we write M at most three times consecutively.

Therefore:

3000 = MMM
4000 cannot be represented as MMMM under these rules.

Instead, larger numbers require an extended notation.

2. How do we represent 4000 and larger numbers?

One common extension uses an overline above a Roman numeral to indicate multiplication by 1000.

For example:

Decimal	Roman numeral  	 Explanation
4000	    I̅V̅	        IV × 1000
5000	     V̅	           V × 1000
10,000	     X̅	           X × 1000
50,000	     L̅            L × 1000
100,000	     C̅            C × 1000
1,000,000	 M̅            M × 1000

Overlines are an extended convention, and Roman numeral notation has varied historically */

#include <stdio.h>

int main()
{
    int num, i;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Enter a decimal number (1-3999): ");
    scanf("%d", &num);

    if (num < 1 || num > 3999)
    {
        printf("Invalid input! Enter a number between 1 and 3999.\n");
        return 0;
    }

    printf("Roman numeral: ");

    for (i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }

    printf("\n");

    return 0;
}
