/* Q.3) Write a program to take a string as input and then 
find the number of vowels, conosonants, digits and spacees */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);

    return 0;
}