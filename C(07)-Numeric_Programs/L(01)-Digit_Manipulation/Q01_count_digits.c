/* Q.1) Write a program to count the number of digits in a number */

#include <stdio.h>

int main()
{
    int n, c = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    if (temp == 0)
        printf("0 is a 1 digit number");
    else
    {
        while (temp != 0)
        {
            c++;
            temp = temp / 10;
        }
        printf("%d is a %d digit number", n, c);
    }

    return 0;
}