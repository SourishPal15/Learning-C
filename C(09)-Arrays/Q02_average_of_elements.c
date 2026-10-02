/* Q.2) Write a program to find the average of the elements
present in an array */

#include <stdio.h>

int main()
{
    int n,i,s=0;
    float avg;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value at Index %d: ",i);
        scanf("%d", &arr[i]);

        s = s + arr[i];
    }
 
    avg = (float) s / n;
    printf("Average of the elements of the array: %.2f", avg);

    return 0;
}