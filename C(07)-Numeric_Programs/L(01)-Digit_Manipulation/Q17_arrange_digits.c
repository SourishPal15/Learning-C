/*
Q. Write a menu-driven program to arrange the digits of a number
in ascending or descending order based on the user's choice.

Example:
Input: 583294

Menu:
1. Ascending Order
2. Descending Order

Choice: 1

Output:
Ascending Order: 234589

Choice: 2

Output:
Descending Order: 985432
*/

#include <stdio.h>

int main()
{
    int n, digit, temp, i, j, choice;
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("--------------------\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("--------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Ascending Order: ");

        for(i = 0; i <= 9; i++)
        {
            temp = n;

            while(temp > 0)
            {
                digit = temp % 10;

                if(digit == i)
                    printf("%d", digit);

                temp = temp / 10;
            }
        }
    }
    else if(choice == 2)
    {
        printf("Descending Order: ");

        for(i = 9; i >= 0; i--)
        {
            temp = n;

            while(temp > 0)
            {
                digit = temp % 10;

                if(digit == i)
                    printf("%d", digit);

                temp = temp / 10;
            }
        }
    }
    else
    {
        printf("Invalid choice.");
    }

    return 0;
}