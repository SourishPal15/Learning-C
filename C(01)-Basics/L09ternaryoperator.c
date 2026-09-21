// In this lesson we will learn about ternary operators

#include <stdio.h>

int main()
{
    printf("Read the comments of this lesson.");

    return 0;
}

/*

Basically there is a short hand way to write the conditional statement, 
that is by using ternary operators.
syntax:

condition ? expression-if-true : expression-if-false ;

example:

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    a>b?printf("%d greater",a):printf("%d greater",b);
    return 0;
}

Here, '?' and ':' are the ternary operators.

*/