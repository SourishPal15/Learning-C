/* Q.4) Check whether a number is prime number or not */

#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }

    if(c==2)
        printf("%d is a Prime number",n);
    else
        printf("%d is not a Prime Number",n);

    return 0;
}


/*

//This is another solution for the question: 

#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}
    
*/

