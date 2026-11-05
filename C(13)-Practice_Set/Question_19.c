/* Q.19) Write a program to display a number in text form, for example
number = 5432 the output should be "FIVE FOUR THREE TWO" */

#include <stdio.h>

int main()
{
    int number, temp, digit, digits[10], count = 0;
    char *words[] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE",
                    "SIX", "SEVEN", "EIGHT", "NINE"};

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("ZERO");
        return 0;
    }

    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        digits[count++] = digit;
        temp = temp / 10;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%s", words[digits[i]]);
        if (i > 0)
            printf(" ");
    }

    return 0;
}