/* Q.11) Write a program to take two strings as input and then 
check whether the two strings are anagram or not 

Note: Two strings are said to be anagram if they same the 
same characters with same frequency but in a different order 

Example: listen, silent */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if(strlen(str1) != strlen(str2))
    {
        anagram = 0;
    }
    else
    {
        for(i = 0; str1[i] != '\0'; i++)
        {
            freq[tolower((unsigned char)str1[i])]++;
            freq[tolower((unsigned char)str2[i])]--;
        }

        for(i = 0; i < 256; i++)
        {
            if(freq[i] != 0)
            {
                anagram = 0;
                break;
            }
        }
    }

    if(anagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}