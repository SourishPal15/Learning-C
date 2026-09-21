/* Q.10) Write a program to input two numbers and check whether they 
are of same sign or not (positive or negative sign) */

#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1,&n2);

    if(n1<0 && n2<0)
        printf("%d and %d both have Negative sign",n1,n2);
    else if(n1>0 && n2>0)
        printf("%d and %d both have Positive sign",n1,n2);
    else if(n1==0 && n2==0)
        printf("%d and %d both are Zero",n1,n2);
    else
        printf("%d and %d both have different signs",n1,n2);

    return 0;
}