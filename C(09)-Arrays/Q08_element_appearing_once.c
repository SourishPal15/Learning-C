/* Q.8) Write a program to print the elements of the array 
which have appeared only once, that is, elements with 
only 1 freaquency */

#include <stdio.h>

void CountOccurenceOnce(int arr[], int n)
{
    int i, j, count, found;

    for(i = 0; i < n; i++)
    {
        count = 0;
        found = 0;

        // Checking if this element has already been counted
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 1)
            continue;

        // Counting the total occurrences
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count==1)
            printf("%d ", arr[i]);

    }
}

int main()
{
    int n, i;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter value at Index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nElements only appearing once: ");

    CountOccurenceOnce(arr, n);

    return 0;
}