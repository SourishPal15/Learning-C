/* Q.1) Using for loop print numbers from N to 1 */

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the first term (N): ");
    scanf("%d", &n);
    printf("%d to 1: ", n);

    for(i=n;i>=1;i--)
    {
        printf("%d ", i);
    }

    return 0;
}