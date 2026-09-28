/* Q.20) Write a program to print the Square Pyramidal Number
Series upto N 
The Square Pyramidal Series is the sum of the first n square numbers.

It starts: 1, 5, 14, 30, 55, 91, ....N

Because:

1² = 1
1² + 2² = 1 + 4 = 5
1² + 2² + 3² = 1 + 4 + 9 = 14
1² + 2² + 3² + 4² = 1 + 4 + 9 + 16 = 30 */

#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Square Pyramidal Number Series: ");
    for(i=1;i<=n;i++)
    {
        s = s + i*i;
        printf("%d ",s);
    }


    return 0;
}