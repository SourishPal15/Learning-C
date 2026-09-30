/* This program shows the basic syntax of array, how to input
elements in an array and how to print the array */

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the element at Index %d (or Position %d): ",i,i+1);
        scanf("%d", &arr[i]);
    }

    printf("The array containing %d elements: ",n);

    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}