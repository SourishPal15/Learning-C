/* Q.24) Write a menu driven program to determine the number of vowels,
consonants, digits and special characters in a given string */

#include <stdio.h>

void countCharacters(char str[])
{
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            special++;
        }
    }

    printf("\nNumber of vowels              : %d", vowels);
    printf("\nNumber of consonants          : %d", consonants);
    printf("\nNumber of digits              : %d", digits);
    printf("\nNumber of special characters  : %d\n", special);
}

void countVowels(char str[])
{
    int i, count = 0;
    char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    printf("\nNumber of vowels: %d\n", count);
}

void countConsonants(char str[])
{
    int i, count = 0;
    char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z' && ch != 'a' && ch != 'e' &&
            ch != 'i' && ch != 'o' && ch != 'u')
            count++;
    }

    printf("\nNumber of consonants: %d\n", count);
}

void countDigits(char str[])
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            count++;
    }

    printf("\nNumber of digits: %d\n", count);
}

void countSpecial(char str[])
{
    int i, count = 0;
    char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
              (ch >= '0' && ch <= '9') || ch == ' ' || ch == '\n' || ch == '\t'))
            count++;
    }

    printf("\nNumber of special characters: %d\n", count);
}

int main()
{
    char str[500];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\n========== MENU ==========\n");
    printf("1. Count all characters\n");
    printf("2. Count vowels\n");
    printf("3. Count consonants\n");
    printf("4. Count digits\n");
    printf("5. Count special characters\n");
    printf("==========================\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("\nInvalid input!\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            countCharacters(str);
            break;

        case 2:
            countVowels(str);
            break;

        case 3:
            countConsonants(str);
            break;

        case 4:
            countDigits(str);
            break;

        case 5:
            countSpecial(str);
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
    }

    return 0;
}