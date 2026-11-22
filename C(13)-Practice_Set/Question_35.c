/* 35. Write a C program to determine the number of
vowels present in a given file. */

/* PRE-REQUISITES: Make a .txt file nanmed 'source' */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("source.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count++;
        }
    }

    printf("Total number of vowels in the file = %d\n", count);

    fclose(fp);

    return 0;
}