/* Q.2) Make a function to check whether a number is even number or odd number,
then use that function to take a number input from the user and display whether
it is even or odd */

#include <stdio.h>

void checkEvenOdd(int n)
{
    if(n % 2 == 0)
        printf("%d is an Even number", n);
    else
        printf("%d is an Odd number", n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n);

    return 0;
}