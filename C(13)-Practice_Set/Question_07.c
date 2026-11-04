/* Q.7) Write a C program to generate an electric bill based on units
consumed according to the following criteria: 

        Units               Charge
  
    First 30 units           Nil
    > 30 and <= 60        Rs. 0.75/unit
    > 60 and <= 100       Rs. 1.5/unit
    > 100                 Rs. 2/unit            */

#include <stdio.h>

int main()
{
    int units;
    float bill = 0.0;

    printf("Enter number of units: ");
    scanf("%d", &units);

    if(units <= 30)
        bill = 0.00;
    else if(units <= 60)
        bill = (units - 30) * 0.75;
    else if(units <= 100)
        bill = (30 * 0.75) + ((units - 60) * 1.5); // multiplying with 30 because charges on 31 to 60
    else
        bill = (30 * 0.75) + (40 * 1.5) + ((units - 100) * 2.0); // same concept, 31 to 60 = 30 and 61 to 100 = 40

    printf("Electric Bill = Rs. %.2f", bill); // upto 2 decimal places

    return 0;
}