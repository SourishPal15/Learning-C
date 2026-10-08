/* Q.2) Write a program to convert an entered string into 
both uppercase and lowercase */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", toupper(str[i]));
    }

    printf("Lowercase: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", tolower(str[i]));
    }

    return 0;
}