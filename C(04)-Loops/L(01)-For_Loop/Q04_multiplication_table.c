/* Q.4) Using for loop print the multiplication table of a number */

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("\n----Multiplication Table of %d----\n", n);

    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }

    return 0;
}