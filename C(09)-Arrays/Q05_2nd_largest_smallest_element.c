/* Q.5) Write a program to find the second largest 
and the second smallest element in the array,
WITHOUT sorting the array */

#include <stdio.h>

int main()
{
    int n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter value at Index %d: ",i);
        scanf("%d", &a[i]);
    }

    largest = a[0];
    secondLargest = a[1];

    smallest = a[0];
    secondSmallest = a[1];

    if(secondLargest > largest)
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    if(secondSmallest < smallest)
    {
        int temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }

    for(i = 2; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }

        if(a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < secondSmallest && a[i] != smallest)
        {
            secondSmallest = a[i];
        }
    }

    printf("Second largest = %d\n", secondLargest);
    printf("Second smallest = %d\n", secondSmallest);

    return 0;
}