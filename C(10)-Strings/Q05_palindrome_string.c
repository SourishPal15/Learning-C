/* Q.5) Write a program to check whether a string is a 
palindrome string or not (ignore cases and spacing) */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;
    int j = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0' && str[j] != '\n')
    {
        j++;
    }

    j--;

    while (i < j)
    {
        if (str[i] == ' ')
        {
            i++;
        }
        else if (str[j] == ' ')
        {
            j--;
        }
        else if (tolower(str[i]) != tolower(str[j]))
        {
            palindrome = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }

    if (palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}