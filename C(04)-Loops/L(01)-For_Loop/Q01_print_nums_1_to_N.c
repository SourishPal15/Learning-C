/* Q.1) Using for loop print numbers from 1 to N */

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the last term (N): ");
    scanf("%d", &n);
    printf("1 to %d: ", n);

    for(i=1;i<=n;i++)
    {
        printf("%d ", i);
    }

    return 0;
}