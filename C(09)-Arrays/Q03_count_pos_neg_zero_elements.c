/* Q.3) Write a program to count the number of positive,
negative and zero elements */

#include <stdio.h>

int main()
{
    int n,i,c1=0,c2=0,c3=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter value at Index %d: ",i);
        scanf("%d", &arr[i]);

        if(arr[i]>0)
            c1++;
        else if(arr[i]<0)
            c2++;
        else
            c3++;
    }

    printf("Number of Positive elements: %d\n",c1);
    printf("Number of Negative elements: %d\n",c2);
    printf("Number of Zeros: %d\n",c3);

    return 0;
}