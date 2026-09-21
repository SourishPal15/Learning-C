/* Q.19) Write a program to input the number of electricity units 
consumed and calculate the bill using these slabs:

First 100 units → ₹5/unit
101–200 → ₹7/unit
201–300 → ₹10/unit
Above 300 → ₹15/unit */

#include <stdio.h>

int main()
{
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 5;
    else if(units <= 200)
        bill = (100 * 5) + ((units - 100) * 7);
    else if(units <= 300)
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    else
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 15);

    printf("Electricity Bill = %.2f", bill);

    return 0;
}