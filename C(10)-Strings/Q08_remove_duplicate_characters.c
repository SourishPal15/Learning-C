/* Q.8) Write a program to take a string as input and then 
remove all the duplicate characters (characters that have
frequency more than 1) */

#include <stdio.h>

int main()
{
    char str[200];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                for(k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }

                j--;
            }
        }
    }

    printf("String without duplicates: %s\n", str);

    return 0;
}