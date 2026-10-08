/* Q.1) Find the length of the entered string WITHOUT 
using strlen() function from string.h */

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            break;
        }

        i++;
    }

    printf("Length of the string = %d\n", i);

    return 0;
}