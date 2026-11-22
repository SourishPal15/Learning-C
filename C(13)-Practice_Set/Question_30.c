/* Q.30) Write a C program to dynamically allocate an integer array of size 5
and perform bubble sort to arrange the data in ascending order. The memory needs
to be deallocate after sorting. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, i, j, temp;

    arr = (int *)malloc(5 * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 5 elements: ");

    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array in ascending order: ");

    for(i=0; i<5; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}