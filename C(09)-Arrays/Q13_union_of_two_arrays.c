/* Q.13) Find the union of two different arrays, at first
combine the arrays and then remove the duplicate elements
present if any and then print the new array */

#include <stdio.h>

int main()
{
    int a[100], b[100], unionArray[200];
    int n1, n2;
    int i, j;
    int exists, size = 0;

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

    /* Add elements of first array */

    for(i = 0; i < n1; i++)
    {
        exists = 0;

        for(j = 0; j < size; j++)
        {
            if(unionArray[j] == a[i])
            {
                exists = 1;
                break;
            }
        }

        if(exists == 0)
        {
            unionArray[size] = a[i];
            size++;
        }
    }

    /* Add elements of second array */

    for(i = 0; i < n2; i++)
    {
        exists = 0;

        for(j = 0; j < size; j++)
        {
            if(unionArray[j] == b[i])
            {
                exists = 1;
                break;
            }
        }

        if(exists == 0)
        {
            unionArray[size] = b[i];
            size++;
        }
    }

    printf("Union:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", unionArray[i]);
    }

    return 0;
}