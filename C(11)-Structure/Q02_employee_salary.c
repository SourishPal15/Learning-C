/* Q.2) 2. Employee Salary Management,
Store employee details and calculate their salaries.

Requirements:
Create a structure named Employee.
Store:
Employee ID
Name
Basic salary
HRA (House Rent Allowance)
DA (Dearness Allowance)

Calculate the gross salary using: Gross Salary = Basic Salary + HRA + DA

Store information for multiple employees using an array of structures.
Display each employee's details and gross salary.
Find and display the employee who earns the highest gross salary.

Sample Output:

Enter the number of employees: 3

Employee 1:
ID: 101
Name: Rahul
Basic Salary: 25000
HRA: 5000
DA: 3000

Employee 2:
ID: 102
Name: Amit
Basic Salary: 30000
HRA: 6000
DA: 4000

Employee 3:
ID: 103
Name: Priya
Basic Salary: 28000
HRA: 4000
DA: 3500

--- Employee Salary Report ---

ID     Name       Gross Salary
101    Rahul      33000
102    Amit       40000
103    Priya      35500

------------------------------
Highest Paid Employee: Amit
Gross Salary: 40000

Note: These figures are illustrative;
the program should calculate the results from the entered data.

*/

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Employee e[100];
    int n, i, highest = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid number of employees.\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%49s", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basicSalary);

        printf("HRA: ");
        scanf("%f", &e[i].hra);

        printf("DA: ");
        scanf("%f", &e[i].da);

        e[i].grossSalary = e[i].basicSalary + e[i].hra + e[i].da;

        if(e[i].grossSalary > e[highest].grossSalary || i == 0)
        {
            highest = i;
        }
    }

    printf("\n--- Employee Salary Report ---\n\n");

    printf("%-8s %-12s %-15s\n", "ID", "Name", "Gross Salary");

    for(i = 0; i < n; i++)
    {
        printf("%-8d %-12s %.2f\n",
               e[i].id,
               e[i].name,
               e[i].grossSalary);
    }

    printf("\n------------------------------");
    printf("\nHighest Paid Employee: %s\n", e[highest].name);
    printf("Gross Salary: %.2f\n", e[highest].grossSalary);

    return 0;
}