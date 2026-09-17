// We will learn about taking inputs from the user 

#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    printf("\nEnter an integer number: ");
    scanf("%d",&a);

    printf("Enter a floating point number: ");
    scanf("%f",&b);

    printf("Enter a character: ");
    scanf(" %c",&c);

    printf("\nInteger number= %d\n",a);
    printf("Floating point number= %g\n",b);
    printf("Character= %c\n",c);

    return 0;
}