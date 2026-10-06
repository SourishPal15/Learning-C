/* Q.15) Write a program to take two arrays as input 
and then check if both arrays are equal or not */

#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n1, n2;
    int i, equal = 1;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    if(n1 != n2)
    {
        equal = 0;
    }
    else
    {
        for(i = 0; i < n1; i++)
        {
            if(a[i] != b[i])
            {
                equal = 0;
                break;
            }
        }
    }

    if(equal == 1)
    {
        printf("Arrays are equal.");
    }
    else
    {
        printf("Arrays are not equal.");
    }

    return 0;
}