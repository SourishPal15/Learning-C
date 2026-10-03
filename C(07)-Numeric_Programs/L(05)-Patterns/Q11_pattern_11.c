/* Q.11) Print this pattern: 

A
A B 
A B C 
A B C D 

Take n input from the user */

#include <stdio.h>

int main()
{
    int n,i,j,c=65;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ", (char)c);
            c++;
        }
        printf("\n");
    }

    return 0;
}