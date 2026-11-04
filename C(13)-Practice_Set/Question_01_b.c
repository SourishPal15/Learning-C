/* Q.1.b) Taking suitable input from user, convert fahrenheit to celsius */

#include <stdio.h>

int main()
{
    float C, F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32.0) * 5.0 / 9.0;
    printf("Temperature converted to Celsius: %g", C);
    return 0;
}