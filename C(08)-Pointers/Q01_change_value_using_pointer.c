/* Q.1) Using pointer change the value of an entered number
by another number */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    int *p = &n;

    int x;
    printf("Enter a new number X to replace N with: ");
    scanf("%d",&x);

    *p = x;

    printf("Modified value of N: %d", n);

    return 0;
}