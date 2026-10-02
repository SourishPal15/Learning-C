/* Q.4) Write a program to reverse an array WITHOUT
creating a new array, can use a third variable */

#include <stdio.h>

void ReverseArray(int a[], int n)
{
    int temp,i;

    for (i=0;i<n/2;i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter value at Index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array: ");

    ReverseArray(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}