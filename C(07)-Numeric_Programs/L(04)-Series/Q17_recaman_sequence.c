/* Q.17) Write a program to print the Recaman Sequence 
The Recamán sequence is defined using a very interesting rule
involving subtraction and addition.

It starts with: a(0) = 0
For each next term: a(n)=a(n-1)-n $$

if that result is positive and has not appeared before.

Otherwise: a(n)=a(n-1)+n 
Example:

Start:

a(0) = 0

For n = 1:
0 - 1 = -1
Not positive, so:
0 + 1 = 1

Next:
1 - 2 = -1
Invalid, so:
1 + 2 = 3

Next:
3 - 3 = 0
0 has already appeared, so:
3 + 3 = 6

Next:
6 - 4 = 2
2 hasn't appeared, so use it.

Therefore: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, ...N

The next term depends on:

The previous term
The current position n
Whether the proposed number has already appeared */

/* Important: The true Recamán sequence requires checking
whether the number has already appeared.
That requires storing previous terms (normally with an array) */

#include <stdio.h>

void Recaman(int n)
{
    int a[n];
    a[0] = 0;

    printf("%d ", a[0]);

    for(int i = 1; i < n; i++)
    {
        int next = a[i - 1] - i;
        int found = 0;

        if(next > 0)
        {
            for(int j = 0; j < i; j++)
            {
                if(a[j] == next)
                {
                    found = 1;
                    break;
                }
            }
        }

        if(next <= 0 || found == 1)
            a[i] = a[i - 1] + i;
        else
            a[i] = next;

        printf("%d ", a[i]);
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Recaman Sequence: ");
    Recaman(n);

    return 0;
}