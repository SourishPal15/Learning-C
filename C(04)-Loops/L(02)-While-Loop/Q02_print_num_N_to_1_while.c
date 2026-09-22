/* Q.2) Using while loop print numbers from N to 1 */

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the first term (N): ");
    scanf("%d", &n);
    printf("%d to 1: ", n);

    i = n;
    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }

    return 0;
}