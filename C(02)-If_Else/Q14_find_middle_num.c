/* Q.14) Write a program to input three numbers and print the middle term that is, 
the term that would lie between them */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a > b && a < c) || (a > c && a < b))
        printf("%d lies between the other two numbers.", a);
    else if((b > a && b < c) || (b > c && b < a))
        printf("%d lies between the other two numbers.", b);
    else
        printf("%d lies between the other two numbers.", c);

    return 0;
}