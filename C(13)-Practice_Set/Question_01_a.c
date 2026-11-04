/* Q.1.a Taking suitable input from user, convert celsius to fahrenheit */

#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    F = (C * 9.0/5) + 32;
    printf("Temperature converted to Fahrenheit: %g", F);
    return 0;
}