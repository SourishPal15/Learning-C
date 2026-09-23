/* Q.4) Make a function to check whether the given character is a vowel or not */

#include <stdio.h>

void checkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel");
    else
        printf("Not a vowel");
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkVowel(ch);

    return 0;
}