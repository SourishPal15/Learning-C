/* Q.14) You're given an array and a number K.
You have to shift/rotate the elements by K positions.
There are two possible directions:

Left rotation
Right rotation

Example: Left Rotation

Suppose:
Array: 1 2 3 4 5
and: 
K = 2
Rotate left by 2 positions.
First rotation: 2 3 4 5 1
Second rotation: 3 4 5 1 2
Final: 3 4 5 1 2

Example: Right Rotation

Same array: 1 2 3 4 5
K = 2
First right rotation: 5 1 2 3 4
Second: 4 5 1 2 3
Final: 4 5 1 2 3

Program could ask:

Enter number of elements: 5
Enter elements: 1 2 3 4 5
Enter K: 2
Enter direction:
1. Left
2. Right */

#include <stdio.h>

int main()
{
    int a[100];
    int n, k, choice;
    int i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    printf("\n1. Left Rotation");
    printf("\n2. Right Rotation");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    k = k % n;

    if(choice == 1)
    {
        for(i = 0; i < k; i++)
        {
            temp = a[0];

            for(j = 0; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }

            a[n - 1] = temp;
        }
    }
    else if(choice == 2)
    {
        for(i = 0; i < k; i++)
        {
            temp = a[n - 1];

            for(j = n - 1; j > 0; j--)
            {
                a[j] = a[j - 1];
            }

            a[0] = temp;
        }
    }
    else
    {
        printf("Invalid choice.");
        return 0;
    }

    printf("Rotated array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}