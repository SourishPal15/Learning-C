/* Q.15) Write a C program to input a person's annual income and calculate 
the income tax based on the following slabs:

Income up to ₹2,50,000 → No tax
₹2,50,001 to ₹5,00,000 → 5% tax
₹5,00,001 to ₹10,00,000 → 20% tax
Above ₹10,00,000 → 30% tax

Display the tax amount to be paid. */

#include <stdio.h>

int main()
{
    float income, tax = 0.0;
    printf("Enter your income: ");
    scanf("%f", &income);

    if(income < 0)
        printf("Invalid income!");
    else if(income <= 250000)
        printf("Tax on income of %0.2f = %0.2f", income, tax);
    else if(income <= 500000)
    {
        tax = (income - 250000) * 0.05;
        printf("Tax on income of %0.2f = %0.2f\n", income, tax);
        printf("Total amount to be paid = %0.2f", income + tax);
    }
    else if(income <= 1000000)
    {
        tax = (250000 * 0.05) + ((income - 500000) * 0.20);
        printf("Tax on income of %0.2f = %0.2f\n", income, tax);
        printf("Total amount to be paid = %0.2f", income + tax);
    }
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + ((income - 1000000) * 0.30);
        printf("Tax on income of %0.2f = %0.2f\n", income, tax);
        printf("Total amount to be paid = %0.2f", income + tax);
    }

    return 0;
}
