/* Q.16) Given two positive integer numbers n1 and n2, check if the 
numbers are consecutive numbers of Fibonacci Series */

#include <stdio.h>

int main()
{
    int n1, n2, a = 0, b = 1, c, flag = 0;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2)
    {
        int temp;

        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    while(b <= n2)
    {
        if(a == n1 && b == n2)
        {
            flag = 1;
            break;
        }

        c = a + b;
        a = b;
        b = c;
    }

    if(flag == 1)
        printf("Yes, The numbers are consecutive Fibonacci numbers.");
    else
        printf("No, The numbers are not consecutive Fibonacci numbers.");

    return 0;
}