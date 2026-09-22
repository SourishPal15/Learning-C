// We will learn about variables, their different data types and their sizes

#include <stdio.h>

int main()
{
    int a = 5;
    float b = 10.25;
    char c = 'A';

    printf("\nInteger data type (a) = %d\n", a);
    printf("Float data type (b) = %f\n", b);
    printf("Character data type (c) = %c\n", c);

    printf("\nSize of Integer data type = %zu bytes\n", sizeof(a));
    printf("Size of Float data type = %zu bytes\n", sizeof(b));
    printf("Size of Character data type = %zu bytes\n", sizeof(c));

    return 0;
}

