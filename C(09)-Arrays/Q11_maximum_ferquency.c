/* Q.11) Write a program to display the element in the 
array with the most number of occurences/frequency, and
also print its frequency */

#include <stdio.h>

int main()
{
    int n;
    int i, j, count, maxCount = 0, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter element at Index %d: ",i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxElement = a[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Frequency: %d\n", maxCount);

    return 0;
}