/* Q.22) Write a modular program which reads an array of n integer 
elements and outputs mean(average), range(max-min) and mode(most frequent element) */

#include <stdio.h>

float Mean(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
        sum = sum + arr[i];

    return (float)sum / n;
}

int Maximum(int arr[], int n)
{
    int i, max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

int Minimum(int arr[], int n)
{
    int i, min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}

int Mode(int arr[], int n)
{
    int i, j, count, maxCount = 0, mode = arr[0];

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main()
{
    int n, i, range;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    range = Maximum(arr, n) - Minimum(arr, n);

    printf("Mean = %.2f", Mean(arr, n));
    printf("\nRange = %d", range);
    printf("\nMode = %d", Mode(arr, n));

    return 0;
}