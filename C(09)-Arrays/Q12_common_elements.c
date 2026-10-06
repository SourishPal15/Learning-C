/* Q.12) Write a program to find the common elements 
between two arrays, take the two arrays input from 
the user */

#include <stdio.h>

int main()
{
    int n1, n2;
    int i, j, k;
    int found, alreadyPrinted;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int a[n1];

    for(i = 0; i < n1; i++)
    {
        printf("Enter element in the 1st array at Index %d: ",i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter number of elements in second array: ");
    scanf("%d", &n2);

    int b[n2];

    for(i = 0; i < n2; i++)
    {
        printf("Enter element in the 2nd array at Index %d: ",i);
        scanf("%d", &b[i]);
    }

    printf("Common elements:\n");

    for(i = 0; i < n1; i++)
    {
        found = 0;
        alreadyPrinted = 0;

        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        for(k = 0; k < i; k++)
        {
            if(a[i] == a[k])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if(found == 1 && alreadyPrinted == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}