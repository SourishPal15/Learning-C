/* Q.8) Write a program to only accept an alphabet from the user and check
whether that alphabet is in uppercase or lowercase */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an Alphabet: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if((ch >= 'A' && ch <= 'Z'))
            printf("%c is in Uppercase",ch);
        else
            printf("%c is in Lowercase",ch);
    }
    else
        printf("Invalid Input. Enter an Alphabet!");

    return 0;
}