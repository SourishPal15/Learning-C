/* Q.16) Write a program to take the month number, and year as input and then 
print the number of days in that month, also check for leap year in case of February */

#include <stdio.h>

int main()
{
    int m,y;
    printf("Enter the month number (1-12): ");
    scanf("%d", &m);
    

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        printf("This month has 31 days");
    else if(m==4 || m==6 || m==9 || m==11)
        printf("This month has 30 days");
    else if(m==2)
    {
        printf("Enter the year: ");
        scanf("%d", &y);
        if((y%400==0) || (y%4==0 && y%100!=0))
            printf("This month has 29 days");
        else
            printf("This month has 28 days");
    }
    else
        printf("Invalid month!");

    return 0;
}