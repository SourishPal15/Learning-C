/* Q.25) Write a menu-driven C program to implement user derfined 
functions for the following:

    1. Determine length of given string
    2. Concatenate two strings 
    3. Copy one string to another string 
    4. Reverse a string (also check if palindrome or not) */
  
#include <stdio.h>

int stringLength(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

void concatenate(char str1[], char str2[])
{
    int i, j;

    i = stringLength(str1);

    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i + j] = str2[j];
    }

    str1[i + j] = '\0';

    printf("\nConcatenated String: %s\n", str1);
}

void copyString(char source[], char copied[])
{
    int i;

    for (i = 0; source[i] != '\0'; i++)
    {
        copied[i] = source[i];
    }

    copied[i] = '\0';

    printf("\nCopied String: %s\n", copied);
}

void reverseString(char str[])
{
    int i, j, len;
    char reverse[500];

    len = stringLength(str);

    for (i = 0, j = len - 1; j >= 0; i++, j--)
    {
        reverse[i] = str[j];
    }

    reverse[i] = '\0';

    printf("\nReversed String: %s\n", reverse);

    for (i = 0; i < len; i++)
    {
        if (str[i] != reverse[i])
            break;
    }

    if (i == len)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

int main()
{
    char str1[500], str2[500], copied[500];
    int choice, len;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    len = stringLength(str1);

    if (len > 0 && str1[len - 1] == '\n')
        str1[len - 1] = '\0';

    printf("\n========== MENU ==========\n");
    printf("1. Find length of a string\n");
    printf("2. Concatenate two strings\n");
    printf("3. Copy one string to another\n");
    printf("4. Reverse a string and check palindrome\n");
    printf("==========================\n");

    printf("\nEnter your choice: ");
    if (scanf("%d", &choice) != 1)
    {
        printf("\nInvalid input!\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            printf("\nLength of the string: %d\n", stringLength(str1));
            break;

        case 2:
            printf("\nEnter the second string: ");
            scanf(" ");
            fgets(str2, sizeof(str2), stdin);

            len = stringLength(str2);

            if (len > 0 && str2[len - 1] == '\n')
                str2[len - 1] = '\0';

            concatenate(str1, str2);
            break;

        case 3:
            copyString(str1, copied);
            break;

        case 4:
            reverseString(str1);
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}