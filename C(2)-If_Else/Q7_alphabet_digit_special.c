/* Q.7) Write a program to take a character as input and check whether that 
character is an alphabet or a numeric digit or a special symbol */

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        printf("%c is an Alphabet",c);
    else if(c>='0' && c<='9')
        printf("%c is a Numberic Digit",c);
    else
        printf("%c is a Special Symbol",c);

    return 0;
}