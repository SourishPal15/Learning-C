/* Q.1) Using recursion print numbers from 1 to N and N to 1 (make two different function)  */

#include <stdio.h>

void printNumbers1(int n)
{
    if(n == 0)
        return;

    printNumbers1(n - 1);
    printf("%d ", n);
}

void printNumbers2(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);
    printNumbers2(n - 1);
}

int main()
{
    int n;

    printf("Enter the last term N: ");
    scanf("%d", &n);

    printf("1 to %d: ", n);
    printNumbers1(n);
    printf("\n%d to 1: ", n);
    printNumbers2(n);
    
    return 0;
}