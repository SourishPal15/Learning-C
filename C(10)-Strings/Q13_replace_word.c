/* Q.13) Write a program to take a sentence as input and then
take a different word as input and ask the user to enter an 
existing word in the given sentence entered before to replace
it with the new word */

/* Note: The solution code is case sensitive, so if your
sentence is "Hello WorLd" and you want to replace "WorLd"
with any other word, YOU HAVE TO WRITE IT AS IT IS OTHERWISE
it will not be replaced */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[500], word[100], replacement[100];
    char result[1000];
    char *pos;
    int i, j = 0;
    int len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the word to find: ");
    scanf("%99s", word);

    printf("Enter the replacement word: ");
    scanf("%99s", replacement);

    len = strlen(word);
    pos = str;

    while(*pos != '\0')
    {
        if(strncmp(pos, word, len) == 0 &&
           (pos == str || pos[-1] == ' ') &&
           (pos[len] == '\0' || pos[len] == ' '))
        {
            for(i = 0; replacement[i] != '\0'; i++)
                result[j++] = replacement[i];

            pos += len;
        }
        else
        {
            result[j++] = *pos;
            pos++;
        }
    }

    result[j] = '\0';

    printf("Result: %s\n", result);

    return 0;
}