/* Q.27.a) Implement Linear Search on an array of n elements */

#include <stdio.h>

int main()
{
    int n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int a[n];

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Element found at position %d.", i + 1);
    else
        printf("Element not found in the array.");

    return 0;
}