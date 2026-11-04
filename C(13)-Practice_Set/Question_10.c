/* Q.10) Check if a given positive integer is a prime number or not */

#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0)
        printf("Enter a positive integer number only!");
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(n % i == 0)
                count++;
        }

        if(count == 2)
            printf("Yes, %d is a Prime Number", n);
        else
            printf("No, %d is not a Prime Number", n);
    }

    return 0;
}