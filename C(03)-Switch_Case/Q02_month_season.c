/* Q.2) write a program using switch case, where the user enters month number, and
then tell the user what season it is during that month generally */

#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            printf("Winter");
            break;

        case 3:
        case 4:
        case 5:
            printf("Spring");
            break;

        case 6:
        case 7:
        case 8:
            printf("Summer");
            break;

        case 9:
        case 10:
        case 11:
            printf("Autumn");
            break;

        default:
            printf("Invalid month");
            break;
    }

    return 0;
}