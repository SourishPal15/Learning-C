// We will see a small demo of arithmetic operators

#include <stdio.h>

int main()
{
    float sum,product,difference,remainder,quotient,a,b;

    printf("\nEnter two numbers to perform arithmetic operations on them: ");
    scanf("%f %f", &a,&b);

    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;

    printf("\nSum = %g",sum);
    printf("\nDifference = %g", difference);
    printf("\nProduct = %g", product);
    printf("\nQuotient = %g", quotient);

    return 0;
}

/*

%g removes the extra zeros, if we use %f we will get upto 6 decimal places
where it may be filled with 0 so we use %g to avoid that

modulus operator (%) would only work on integer data type

suppose:

    int a=5,b=2;
    int c = a % 2;

so, we will get the value of c as 1 since on dividing 5 by 2
our rwmainder is 1

*/