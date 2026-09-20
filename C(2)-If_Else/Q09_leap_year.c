/* Q.9) Write a program to take a year as input from the userr and check 
whether that year is a leap year or not */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year <= 0)
        printf("Invalid year!");
    else
    {
        if (year % 400 == 0)
            printf("%d is a Leap Year.", year);
        
        else if (year % 100 == 0)
            printf("%d is not a Leap Year.", year);
        
        else if (year % 4 == 0)
            printf("%d is a Leap Year.", year);
        
        else
            printf("%d is not a Leap Year.", year);        
    }

    return 0;
}