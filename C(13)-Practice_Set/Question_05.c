/* Q.5) Write a C program to compute the grade from the marks (0 <= marks <= 100)
of a subject using the following Grading Scheme:

    80 - 100: A
    60 - 79:  B
    50 - 59:  C
    40 - 49:  D
    0 - 39:   F   */

#include <stdio.h>

int main()
{
    float marks;
    printf("Enter marks of the subject: ");
    scanf("%f", &marks);

    if(marks >=0 && marks < 40)
        printf("Grade: F");
    else if(marks >= 40 && marks < 50)
        printf("Grade: D");
    else if(marks >= 50 && marks < 60)
        printf("Grade: C");
    else if(marks >= 60 && marks < 80)
        printf("Grade: B");
    else if(marks >= 80 && marks <= 100)
        printf("Grade: A");
    else
        printf("Invalid Marks!");

    return 0;
}