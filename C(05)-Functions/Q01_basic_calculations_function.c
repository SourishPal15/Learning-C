/* Q.1) Using function, perform basic calculations like adiition subtraction, multiplication,
division on two numbers */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of %d and %d= %d\n", a,b,add(a, b));
    printf("Subtracting %d from %d= %d\n", b,a,subtract(a, b));
    printf("Multiplying %d and %d= %d\n", a,b,multiplication(a, b));
    printf("Dividing %d by %d= %0.2f\n", a,b,division(a, b));

    return 0;
}