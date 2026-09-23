/* Q.3) Make two functions- a fucntion which gives the square of a number and another
function which gives the cube of the number */

#include <stdio.h>

int square(int); // function prototype
int cube(int); // function prototype

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d\n", square(n));
    printf("Cube= %d", cube(n));

    return 0;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}