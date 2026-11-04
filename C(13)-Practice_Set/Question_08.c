/* Q.8) Given a positive integer value n (n >= 0) display the number, its square and its cube
of numbers from 1 to n in a tanular format */

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\n%-12s %-12s %-12s\n", "Number", "Square", "Cube");
    printf("------------------------------------\n");

    if(n == 0)
        printf("%-12d %-12d %-12d\n", 0, 0, 0);

    for(i = 1; i <= n; i++)
    {
        printf("%-12d %-12d %-12d\n", i, i*i, i*i*i);
    }

    return 0;
}