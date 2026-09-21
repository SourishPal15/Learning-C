/* Q.5) Write a menu driven program and allow to user to choose between:

seconds to minutes
seconds to hours
minutes to seconds 
minutes to hours
hours to seconds
hours to minutes

*/

#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    printf("--------------------------\n");
    printf("1. Seconds to Minutes\n");
    printf("2. Seconds to Hours\n");
    printf("3. Minutes to Seconds\n");
    printf("4. Minutes to Hours\n");
    printf("5. Hours to Seconds\n");
    printf("6. Hours to Minutes\n");
    printf("--------------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter time in seconds: ");
            scanf("%f", &value);

            result = value / 60;
            printf("%.2f seconds = %.2f minutes", value, result);
            break;

        case 2:
            printf("Enter time in seconds: ");
            scanf("%f", &value);

            result = value / 3600;
            printf("%.2f seconds = %.2f hours", value, result);
            break;

        case 3:
            printf("Enter time in minutes: ");
            scanf("%f", &value);

            result = value * 60;
            printf("%.2f minutes = %.2f seconds", value, result);
            break;

        case 4:
            printf("Enter time in minutes: ");
            scanf("%f", &value);

            result = value / 60;
            printf("%.2f minutes = %.2f hours", value, result);
            break;

        case 5:
            printf("Enter time in hours: ");
            scanf("%f", &value);

            result = value * 3600;
            printf("%.2f hours = %.2f seconds", value, result);
            break;

        case 6:
            printf("Enter time in hours: ");
            scanf("%f", &value);

            result = value * 60;
            printf("%.2f hours = %.2f minutes", value, result);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}