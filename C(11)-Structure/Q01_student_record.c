/* Q.1) 1. Student Record Management
Objective: Create a structure to store and display a student's information.

Requirements:
Create a structure named Student.
Store the following information:
Roll number
Name
Age
Marks in three subjects
Take the student's information as input.
Calculate the total marks and average marks.
Display all the information, including the total and average.

Sample Output:

Enter Roll Number: 101
Enter Name: Rahul
Enter Age: 18
Enter marks in three subjects: 85 90 78

--- Student Details ---
Roll Number: 101
Name: Rahul
Age: 18
Total Marks: 253
Average Marks: 84.33  
-----------------------

*/

#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    int age;
    float marks[3];
};

int main()
{
    struct Student s;
    float total = 0, average;
    int i;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNumber);

    printf("Enter Name: ");
    scanf("%49s", s.name);

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter marks in three subjects: ");

    for(i = 0; i < 3; i++)
    {
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    average = total / 3;

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Total Marks: %.0f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("-----------------------");

    return 0;
}