/* Q.17) Write a program to take the day,month,year as input from the user
and check whether that date is valid or not */

#include <stdio.h>

int main()
{
    int d, m, y, days;
    printf("Enter day, month and year: ");
    scanf("%d %d %d", &d, &m, &y);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        days = 31;
    else if(m==4 || m==6 || m==9 || m==11)
        days = 30;
    else if(m==2)
    {
        if(y%400==0 || (y%4==0 && y%100!=0))
            days = 29;
        else
            days = 28;
    }
    else
    {
        printf("Invalid date.");
        return 0;
    }

    if(d >= 1 && d <= days)
        printf("Valid date.");
    else
        printf("Invalid date.");

    return 0;
}