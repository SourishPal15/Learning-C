/* Q.4) Write a program using switch case to either convert integer to its respective 
Character and vice versa */

#include <stdio.h>

int main()
{
    int c;

    printf("-----------------------\n");
    printf("1. Integer to Char\n");
    printf("2. Char to Integer\n");
    printf("-----------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
        {
            int i;
            printf("Enter your Integer value: ");
            scanf("%d", &i);

            if(i >= 32 && i <= 126)
                printf("%d converted to char: %c", i, (char)i);
            else
                printf("Invalid/Cannot be printed to char");
            break;
        }
        case 2:
        {
            char ch;
            printf("Enter your Character: ");
            scanf(" %c", &ch);

            printf("%c converted to integer: %d", ch, ch);
            break;
        }
        default:
            printf("Wrong choice!");
            break;
    }

    return 0;
}