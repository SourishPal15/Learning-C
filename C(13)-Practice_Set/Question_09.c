/* Q.9) Given an input positive number n, display odd numbers in range [1,n] */

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n<=0)
        printf("Enter a positive integer number!");
    else
    {
        printf("Odd numbers in range [1,%d]: ", n);
        
        for(i = 1; i <= n; i++)
        {
            if(i % 2 !=0)
                printf("%d ", i);
        }
    }

    return 0;
}