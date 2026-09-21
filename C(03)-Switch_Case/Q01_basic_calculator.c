/* Q.1) Write a menu driven program to perform basic calculations (addition,
subtraction,multiplication,division) on two numbers */

#include <stdio.h>

int main()
{
    int c;
    float a,b;

    printf("------Calculator------\n");
    printf("1 for Addition (+)\n");
    printf("2 for Subtraction (-)\n");
    printf("3 for Multiplication (*)\n");
    printf("4 for Division (/)\n");
    printf("----------------------\n");
    printf("Enter your choice: ");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
        {
            printf("Now, enter two numbers: ");
            scanf("%f %f", &a,&b);
            printf("Adding %g and %g we get %g", a,b,a+b);
            break;
        }
        case 2: 
        {
            printf("Now, enter two numbers: ");
            scanf("%f %f", &a,&b);
            printf("Subtracting %g from %g we get %g", b,a,a-b);
            break;
        }
        case 3: 
        {
            printf("Now, enter two numbers: ");
            scanf("%f %f", &a,&b);
            printf("Multiplying %g and %g we get %g", a,b,a*b);
            break;
        }
        case 4:
        {
            printf("Now, enter two numbers: ");
            scanf("%f %f", &a,&b);
            printf("Dividing %g by %g we get %.2f", a,b,a/b);
            break;
        }
        default:
        {
            printf("Wrong choice!");
            break;
        }
    }

    return 0;
}