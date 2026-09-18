/* Q.6) Write a program to take an Alphabet as input and check whether it is
a vowel or a consonant */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an Alphabet: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' ||
           ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
            printf("%c is a Vowel", ch);
        else
            printf("%c is a Consonant", ch);
    }
    else
        printf("Invalid Input! Please enter an alphabet.");

    return 0;
}