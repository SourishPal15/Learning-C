/* Q.1) Using do-while loop print numbers from 1 to N */

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the last term (N): ");
    scanf("%d", &n);
    printf("1 to %d: ", n);

    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);

    return 0;
}