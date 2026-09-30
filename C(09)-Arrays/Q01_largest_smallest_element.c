/* Q.1) Find the largest element and the smallest element in
an array */

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

    int largest = arr[0];
    int smallest = arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
            largest = arr[i];

        if(arr[i]<smallest)
            smallest = arr[i];
    }

    printf("Largest element: %d",largest);
    printf("\nSmallest element: %d",smallest);


    return 0;
}