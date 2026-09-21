/* Q.3) Write a menu of a food restaurant and ask the user for their order, number of 
the item that they want and then print the total bill */

#include <stdio.h>

int main()
{
    int choice, quantity;
    float price, total;

    printf("------FOOD MENU------\n");
    printf("1. Pizza    - Rs. 200\n");
    printf("2. Burger   - Rs. 120\n");
    printf("3. Sandwich - Rs. 100\n");
    printf("4. Pasta    - Rs. 180\n");
    printf("---------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            price = 200;
            printf("You selected Pizza.\n");
            break;

        case 2:
            price = 120;
            printf("You selected Burger.\n");
            break;

        case 3:
            price = 100;
            printf("You selected Sandwich.\n");
            break;

        case 4:
            price = 180;
            printf("You selected Pasta.\n");
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("Total Bill = Rs. %.2f", total);

    return 0;
}