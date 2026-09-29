/* Q.29) Check whether a number is a Trimorphic Number
A Trimorphic Number is a number whose cube ends with the
number itself.

Example:
4³ = 64
The last digit of 64 is 4.

Therefore, 4 is a Trimorphic Number.

Another example:
24³ = 13824
The last two digits are 24.

Therefore, 24 is a Trimorphic Number. */

#include <stdio.h>

int IsTrimorphic(int n)
{
    int temp=n;
    int cube=n*n*n;
    int p=1;

    while(temp!=0)
    {
        p=p*10;
        temp=temp/10;
    }

    if(cube%p==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(IsTrimorphic(n)==1)
        printf("Yes, %d is a Trimorphic Number",n);
    else
        printf("No, %d is not a Trimorphic Number",n);

    return 0;
}