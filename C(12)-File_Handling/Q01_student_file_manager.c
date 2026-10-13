/* Q.1) Create a program that stores student information in a text file
and retrieves it whenever needed. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

void addStudent() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "a");

    if (fp == NULL) {
        printf("\nError: Unable to open the file.\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    if (scanf("%d", &s.roll) != 1) {
        printf("Invalid roll number.\n");
        fclose(fp);
        return;
    }

    printf("Enter Name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter Age: ");
    if (scanf("%d", &s.age) != 1) {
        printf("Invalid age.\n");
        fclose(fp);
        return;
    }

    printf("Enter Marks: ");
    if (scanf("%f", &s.marks) != 1) {
        printf("Invalid marks.\n");
        fclose(fp);
        return;
    }

    fprintf(fp, "%d\n%s\n%d\n%.2f\n",
            s.roll, s.name, s.age, s.marks);

    fclose(fp);

    printf("\nStudent record added successfully!\n");
}

void displayStudents() {
    FILE *fp;
    struct Student s;
    char line[100];
    int count = 0;

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n============== STUDENT RECORDS ==============\n");
    printf("%-10s %-25s %-10s %-10s\n",
           "Roll", "Name", "Age", "Marks");
    printf("-------------------------------------------------------\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        if (sscanf(line, "%d", &s.roll) != 1)
            break;

        if (fgets(s.name, sizeof(s.name), fp) == NULL)
            break;

        s.name[strcspn(s.name, "\n")] = '\0';

        if (fgets(line, sizeof(line), fp) == NULL ||
            sscanf(line, "%d", &s.age) != 1)
            break;

        if (fgets(line, sizeof(line), fp) == NULL ||
            sscanf(line, "%f", &s.marks) != 1)
            break;

        printf("%-10d %-25s %-10d %-10.2f\n",
               s.roll, s.name, s.age, s.marks);

        count++;
    }

    if (count == 0)
        printf("No valid student records available.\n");

    fclose(fp);
}

void countStudents() {
    FILE *fp;
    char line[100];
    struct Student s;
    int count = 0;

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("\nNo student records found.\n");
        return;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        if (sscanf(line, "%d", &s.roll) != 1)
            break;

        if (fgets(s.name, sizeof(s.name), fp) == NULL)
            break;

        if (fgets(line, sizeof(line), fp) == NULL ||
            sscanf(line, "%d", &s.age) != 1)
            break;

        if (fgets(line, sizeof(line), fp) == NULL ||
            sscanf(line, "%f", &s.marks) != 1)
            break;

        count++;
    }

    fclose(fp);

    printf("\nTotal number of students: %d\n", count);
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT INFORMATION FILE MANAGER =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Count Total Students\n");
        printf("4. Exit\n");
        printf("=============================================");
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            continue;
        }

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                countStudents();
                break;

            case 4:
                printf("\nExiting Student Information File Manager.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}