/* Q.21) Write a modularized program to compute maximum, minimum, sum 
and average of N numbers (N is user input) */

#include <stdio.h>

int Maximum(int arr[], int n)
{
    int max = arr[0], i;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

int Minimum(int arr[], int n)
{
    int min = arr[0], i;

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}

int Sum(int arr[], int n)
{
    int sum = 0, i;

    for(i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}

float Average(int sum, int n)
{
    return (float)sum / n;
}

int main()
{
    int n, i, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
 
    int arr[n];

    printf("Enter %d numbers: ", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = Sum(arr, n);

    printf("Maximum = %d", Maximum(arr, n));
    printf("\nMinimum = %d", Minimum(arr, n));
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", Average(sum, n));

    return 0;
}