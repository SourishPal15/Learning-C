/* Q.4) Using pointer, check which number is the largest among
two numbers */

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    int *p1=&a, *p2=&b;

    if(*p1>*p2)
        printf("%d is the largest",*p1);
    else
        printf("%d is the largest",*p2);

    return 0;
}