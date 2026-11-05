/* Q.13) Display the first n (n > 0) of  the Fibonacci Series */

#include <stdio.h>

int main()
{
    int n, i, a=0, b=1,c;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if(n<=0)
        printf("Enter a positive integer!");
    else
    {
        printf("Fibonacci Series: ");

        for(i = 1; i <= n; i++)
        {
            printf("%d ", a);

            c = a + b;
            a = b;
            b = c;
        }
    }

    return 0;
}