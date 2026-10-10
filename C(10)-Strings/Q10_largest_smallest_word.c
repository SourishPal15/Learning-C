/* Q.10) Write a program to take a string as input and then 
find the largest word and the smallest word present in the
string */

#include <stdio.h>

int main()
{
    char str[300];
    char word[100], largest[100], smallest[100];
    int i, j, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    largest[0] = '\0';
    smallest[0] = '\0';

    while(str[i] != '\0')
    {
        while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            i++;
        }

        if(str[i] == '\0')
            break;

        j = 0;

        while(str[i] != ' ' && str[i] != '\n' &&
              str[i] != '\t' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
            i++;
        }

        word[j] = '\0';
        length = j;

        if(largest[0] == '\0' || length > 0)
        {
            int largestLength = 0;
            int smallestLength = 0;

            for(j = 0; largest[j] != '\0'; j++)
                largestLength++;

            for(j = 0; smallest[j] != '\0'; j++)
                smallestLength++;

            if(largest[0] == '\0' || length > largestLength)
            {
                for(j = 0; word[j] != '\0'; j++)
                    largest[j] = word[j];

                largest[j] = '\0';
            }

            if(smallest[0] == '\0' || length < smallestLength)
            {
                for(j = 0; word[j] != '\0'; j++)
                    smallest[j] = word[j];

                smallest[j] = '\0';
            }
        }
    }

    if(largest[0] == '\0')
    {
        printf("No words found.\n");
    }
    else
    {
        printf("Largest word: %s\n", largest);
        printf("Smallest word: %s\n", smallest);
    }

    return 0;
}