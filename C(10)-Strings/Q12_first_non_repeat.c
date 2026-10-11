/* Q.12) Write a program to take a string as input and then 
find the first non repeating character in the string 

Example: Swiss 
         Firsrt Non-Repeating Character: w */

#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n' && freq[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No non-repeating character found.\n");

    return 0;
}