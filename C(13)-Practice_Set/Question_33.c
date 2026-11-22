/* Q.33) Implement row-major policy to identify an element
from a matrix */

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, key, found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements: ");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j] == key)
            {
                printf("Element found at Row %d, Column %d.\n", i+1, j+1);
                found = 1;
                break;
            }
        }

        if(found == 1)
            break;
    }

    if(found == 0)
        printf("Element not found in the matrix.\n");

    return 0;
}