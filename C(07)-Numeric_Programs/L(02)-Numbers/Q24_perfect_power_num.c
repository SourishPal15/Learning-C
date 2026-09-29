/* Q.24) Check whether a number is a perfect power or not,
A Perfect Power can be expressed as aᵇ, where a > 0 and b > 1.

Examples: 4 = 2², 27 = 3³  */

#include <stdio.h>

int PerfectPower(int n)
{
    int base, power, result;

    for(base=2;base<n;base++)
    {
        result=base;

        for(power=2;result<n;power++)
        {
            result=result*base;

            if(result==n)
                return 1;

            if(result>n)
                break;
        }
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(PerfectPower(n)==1)
        printf("Yes, %d is a Perfect Power",n);
    else
        printf("No, %d is not a Perfect Power",n);

    return 0;
}