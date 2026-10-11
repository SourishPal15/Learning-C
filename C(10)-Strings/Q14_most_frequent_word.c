/* Q.14) Write a program to find the most frequent word in 
an entered sentence */

/* Note: This solution code works if there are multiple same
words in the sentence, suppose: pizza is good pizza is tasty 
so the frequent word is pizza and its frequency is 2, but
if the sentence is Hello World, the program would show the
first word of the sentence that is "Hello" as the most 
frequent word */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[500];
    char words[100][50];
    char temp[50];
    int count[100] = {0};
    int i, j, k, n = 0;
    int max = 0, index = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while(str[i] != '\0')
    {
        while(str[i] == ' ' || str[i] == '\n')
            i++;

        if(str[i] == '\0')
            break;

        j = 0;

        while(str[i] != '\0' && str[i] != ' ' &&
              str[i] != '\n' && j < 49)
        {
            temp[j++] = tolower((unsigned char)str[i]);
            i++;
        }

        temp[j] = '\0';

        for(k = 0; k < n; k++)
        {
            if(strcmp(words[k], temp) == 0)
                break;
        }

        if(k < n)
        {
            count[k]++;
        }
        else if(n < 100)
        {
            strcpy(words[n], temp);
            count[n] = 1;
            n++;
        }
    }

    if(n == 0)
    {
        printf("No words found.\n");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            index = i;
        }
    }

    printf("Most frequent word: %s\n", words[index]);
    printf("Frequency: %d\n", max);

    return 0;
}