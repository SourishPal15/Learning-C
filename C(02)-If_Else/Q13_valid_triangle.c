/* Q.13) Write a program to take the three angles of a triangle and check whether 
the angles are valid or not, if valid, then input three sides of the triangle,
and then check if it is valid or not,  if valid then find out what type of triangle
it is based on its sides */

#include <stdio.h>

int main()
{
    int a1, a2, a3;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if((a1 > 0 && a2 > 0 && a3 > 0) && (a1 + a2 + a3 == 180))
    {
        printf("Alright, the triangle has valid angles\n");
        int s1, s2, s3;
        printf("Now, enter the three sides of the triangle: ");
        scanf("%d %d %d", &s1, &s2, &s3);

        if((s1 > 0 && s2 > 0 && s3 > 0) &&
           (s1 + s2 > s3) &&
           (s2 + s3 > s1) &&
           (s3 + s1 > s2))
        {
            printf("Alright, the triangle has valid sides\n");

            if((s1 == s2) && (s1 == s3))
                printf("This is an Equilateral Triangle");
            else if((s1 == s2) || (s1 == s3) || (s2 == s3))
                printf("This is an Isosceles Triangle");
            else
                printf("This is a Scalene Triangle");
        }
        else
            printf("It is an Invalid Triangle (sides are wrong)");
    }
    else
        printf("It is an Invalid Triangle (angles are wrong)");

    return 0;
}