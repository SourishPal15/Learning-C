/* Q.6) Write a program to take a string as input and then 
count each character, digit and space individually */

#include <stdio.h>

int main()
{
    char str[200];
    int i, j, count, visited[200] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n' || visited[i])
            continue;

        count = 1;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if(str[i] == ' ')
            printf("Space: %d\n", count);
        else if(str[i] >= '0' && str[i] <= '9')
            printf("Digit '%c': %d\n", str[i], count);
        else
            printf("'%c': %d\n", str[i], count);
    }

    return 0;
}