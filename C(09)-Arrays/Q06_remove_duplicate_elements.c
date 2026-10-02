/* Q.6) Write a program to remove the duplicate 
elements from the array */

#include <stdio.h>

void RemoveDupes(int a[], int n)
{
    int b[n];
    int i, j, k = 0;
    int found;

    for(i = 0; i < n; i++)
    {
        found = 0;

        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            b[k] = a[i];
            k++;
        }
    }

    for(i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
}

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter the value at Index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray after removing duplicates: ");

    RemoveDupes(arr, n);

    return 0;
}