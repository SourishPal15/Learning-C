/* Q.15) Write a program to compress a string entered by user

String compression means representing consecutive repetitions
of a character by writing the character followed
by its frequency.

For example: aaabbccccdaa becomes a3b2c4d1a2.

Notice that the final aa is counted separately
because it is not consecutive with the first group of
a characters. */

#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter a string: ");
    scanf("%99s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}