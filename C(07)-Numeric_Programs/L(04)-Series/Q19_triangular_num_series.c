/* Q.19) Write a program to print the triangular number series
upto N
The Triangular Number Series represents the number of objects
that can be arranged in a triangle.

It starts: 1, 3, 6, 10, 15, 21, 28, ....N

The pattern is:

1
1 + 2 = 3
1 + 2 + 3 = 6
1 + 2 + 3 + 4 = 10
1 + 2 + 3 + 4 + 5 = 15 */

#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Triangular Number Series: ");
    for(i=1;i<=n;i++)
    {
        s = s + i;
        printf("%d ",s);
    }


    return 0;
}