/* Q.29) Write a menu driven program to implement the recursive
(including tail recursive, wherever possible) solution for the
following problems: 

    a) Factorial of a number 
    b) Display digits from left to right (then right to left)
    c) Compute x^y only using multiplication 
    d) nth Fibonacci Number 
    e) GCD of two numbers using the euclidean algorithm
    f) Binary search 
                        */

#include <stdio.h>

int Factorial(int n)
{
    if(n<=1)
        return 1;

    return n * Factorial(n-1);
}

int FactorialTail(int n, int result)
{
    if(n<=1)
        return result;

    return FactorialTail(n-1, n*result);
}

void LeftToRight(int n)
{
    if(n==0)
        return;

    LeftToRight(n/10);
    printf("%d ", n%10);
}

void RightToLeft(int n)
{
    if(n==0)
        return;

    printf("%d ", n%10);
    RightToLeft(n/10);
}

int Power(int x, int y)
{
    if(y==0)
        return 1;

    return x * Power(x, y-1);
}

int PowerTail(int x, int y, int result)
{
    if(y==0)
        return result;

    return PowerTail(x, y-1, result*x);
}

int Fibonacci(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int FibonacciTail(int n, int a, int b)
{
    if(n==0)
        return a;

    if(n==1)
        return b;

    return FibonacciTail(n-1, b, a+b);
}

int GCD(int a, int b)
{
    if(b==0)
        return a;

    return GCD(b, a%b);
}

int BinarySearch(int a[], int low, int high, int key)
{
    int mid;

    if(low>high)
        return -1;

    mid = (low+high)/2;

    if(a[mid]==key)
        return mid;

    if(key<a[mid])
        return BinarySearch(a, low, mid-1, key);

    return BinarySearch(a, mid+1, high, key);
}

int main()
{
    int choice, n, x, y, a, b, result;
    int arr[100], i, key, size;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Factorial of a number\n");
        printf("2. Display digits (Left to Right and Right to Left)\n");
        printf("3. Compute x^y using multiplication\n");
        printf("4. Nth Fibonacci Number\n");
        printf("5. GCD using Euclidean Algorithm\n");
        printf("6. Binary Search\n");
        printf("7. Exit\n");
        printf("==========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n<0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                {
                    printf("Factorial (Normal Recursion): %d\n", Factorial(n));
                    printf("Factorial (Tail Recursion): %d\n", FactorialTail(n, 1));
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n<0)
                    n = -n;

                printf("Digits from Left to Right: ");

                if(n==0)
                    printf("0");
                else
                    LeftToRight(n);

                printf("\nDigits from Right to Left: ");

                if(n==0)
                    printf("0");
                else
                    RightToLeft(n);

                printf("\n");
                break;

            case 3:
                printf("Enter the base (x): ");
                scanf("%d", &x);

                printf("Enter the exponent (y): ");
                scanf("%d", &y);

                if(y<0)
                    printf("Negative exponents are not supported.\n");
                else
                {
                    printf("Power (Normal Recursion): %d\n", Power(x, y));
                    printf("Power (Tail Recursion): %d\n", PowerTail(x, y, 1));
                }
                break;

            case 4:
                printf("Enter the position (n): ");
                scanf("%d", &n);

                if(n<0)
                    printf("Invalid position.\n");
                else
                {
                    printf("Fibonacci (Normal Recursion): %d\n", Fibonacci(n));
                    printf("Fibonacci (Tail Recursion): %d\n", FibonacciTail(n, 0, 1));
                }
                break;

            case 5:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);

                if(a<0)
                    a = -a;

                if(b<0)
                    b = -b;

                printf("GCD = %d\n", GCD(a, b));
                break;

            case 6:
                printf("Enter the size of the array: ");
                scanf("%d", &size);

                if(size<=0 || size>100)
                {
                    printf("Invalid array size.\n");
                    break;
                }

                printf("Enter %d elements in ascending order:\n", size);

                for(i=0; i<size; i++)
                    scanf("%d", &arr[i]);

                printf("Enter the element to search: ");
                scanf("%d", &key);

                result = BinarySearch(arr, 0, size-1, key);

                if(result==-1)
                    printf("Element not found.\n");
                else
                    printf("Element found at position %d.\n", result+1);

                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    }while(choice!=7);

    return 0;
}