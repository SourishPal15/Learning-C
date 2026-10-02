/* Q.7) Write a program to find the freaquency of 
all the elements in an array */

#include <stdio.h>

void CountOccurence(int arr[], int n)
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

        printf("\nFrequency of %d is: %d", arr[i], count);
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

    CountOccurence(arr, n);

    return 0;
}