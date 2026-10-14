/* Q.16) Write a program to take a sentence as input and then
sort the words of the sentence in alphabetical order */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[500], words[50][50], temp[50];
    int i, j, k = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            words[count][k++] = str[i];
        }
        else if (k > 0)
        {
            words[count][k] = '\0';
            count++;
            k = 0;
        }
    }

    if (k > 0)
    {
        words[count][k] = '\0';
        count++;
    }

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            int a = 0, result = 0;

            while (words[j][a] != '\0' && words[j + 1][a] != '\0')
            {
                char c1 = tolower((unsigned char)words[j][a]);
                char c2 = tolower((unsigned char)words[j + 1][a]);

                if (c1 != c2)
                {
                    result = c1 - c2;
                    break;
                }

                a++;
            }

            if (result == 0)
            {
                result = tolower((unsigned char)words[j][a])
                       - tolower((unsigned char)words[j + 1][a]);
            }

            if (result > 0)
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords in alphabetical order:\n");

    for (i = 0; i < count; i++)
    {
        printf("%s", words[i]);

        if (i < count - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
