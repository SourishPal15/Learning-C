/* Q.1) Using while loop print numbers from 1 to N */

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the last term (N): ");
    scanf("%d", &n);
    printf("1 to %d: ", n);

    i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
