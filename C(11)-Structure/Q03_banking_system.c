/* Q.3) Banking System Using Structures,
Create a simple banking application that maintains
customer account records.

Requirements:

Create a structure named Account containing:

Account number
Account holder's name
Account type
Current balance

Your program should provide a menu with the following options:

===== BANKING SYSTEM =====
1. Create Account
2. Display All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Display Highest Balance
7. Exit
==========================
Enter your choice:

*/

/* Note: This version does not store the information entered in
the terminal/input, so therefore when the terminal is closed, 
all the information entered is lost, this is just an educational
program not a functional program which can store the values even
after the terminal is closed */

#include <stdio.h>

#define MAX_ACCOUNTS 100

struct Account
{
    int accountNumber;
    char name[50];
    char accountType[20];
    double balance;
};

struct Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

int FindAccount(int accountNumber);
void CreateAccount(void);
void DisplayAccounts(void);
void SearchAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void DisplayHighestBalance(void);
void DisplayAccount(int index);

int main(void)
{
    int choice;

    do
    {
        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Display Highest Balance\n");
        printf("7. Exit\n");
        printf("==========================\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            continue;
        }

        switch (choice)
        {
            case 1:
                CreateAccount();
                break;

            case 2:
                DisplayAccounts();
                break;

            case 3:
                SearchAccount();
                break;

            case 4:
                DepositMoney();
                break;

            case 5:
                WithdrawMoney();
                break;

            case 6:
                DisplayHighestBalance();
                break;

            case 7:
                printf("\nThank you for using the Banking System.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}

int FindAccount(int accountNumber)
{
    int i;

    for (i = 0; i < accountCount; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            return i;
        }
    }

    return -1;
}

void CreateAccount(void)
{
    int accountNumber;
    double initialBalance;

    if (accountCount >= MAX_ACCOUNTS)
    {
        printf("\nAccount storage is full.\n");
        return;
    }

    printf("\n--- Create Account ---\n");

    printf("Enter Account Number: ");
    if (scanf("%d", &accountNumber) != 1)
    {
        printf("Invalid account number.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    if (accountNumber <= 0)
    {
        printf("Account number must be positive.\n");
        return;
    }

    if (FindAccount(accountNumber) != -1)
    {
        printf("Account number already exists.\n");
        return;
    }

    printf("Enter Account Holder Name: ");
    scanf(" %49[^\n]", accounts[accountCount].name);

    printf("Enter Account Type: ");
    scanf(" %19[^\n]", accounts[accountCount].accountType);

    printf("Enter Initial Balance: ");
    if (scanf("%lf", &initialBalance) != 1)
    {
        printf("Invalid balance.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    if (initialBalance < 0)
    {
        printf("Initial balance cannot be negative.\n");
        return;
    }

    accounts[accountCount].accountNumber = accountNumber;
    accounts[accountCount].balance = initialBalance;

    accountCount++;

    printf("\nAccount created successfully!\n");
}

void DisplayAccount(int index)
{
    printf("\nAccount Number: %d\n",
           accounts[index].accountNumber);

    printf("Account Holder: %s\n",
           accounts[index].name);

    printf("Account Type: %s\n",
           accounts[index].accountType);

    printf("Current Balance: %.2f\n",
           accounts[index].balance);
}

void DisplayAccounts(void)
{
    int i;

    if (accountCount == 0)
    {
        printf("\nNo accounts available.\n");
        return;
    }

    printf("\n--- All Bank Accounts ---\n");

    for (i = 0; i < accountCount; i++)
    {
        printf("\nAccount %d\n", i + 1);
        DisplayAccount(i);
    }
}

void SearchAccount(void)
{
    int accountNumber;
    int index;

    printf("\nEnter Account Number to Search: ");

    if (scanf("%d", &accountNumber) != 1)
    {
        printf("Invalid account number.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    index = FindAccount(accountNumber);

    if (index == -1)
    {
        printf("\nAccount not found.\n");
    }
    else
    {
        printf("\n--- Account Found ---\n");
        DisplayAccount(index);
    }
}

void DepositMoney(void)
{
    int accountNumber;
    int index;
    double amount;

    printf("\nEnter Account Number: ");

    if (scanf("%d", &accountNumber) != 1)
    {
        printf("Invalid account number.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    index = FindAccount(accountNumber);

    if (index == -1)
    {
        printf("Account not found.\n");
        return;
    }

    printf("Enter Deposit Amount: ");

    if (scanf("%lf", &amount) != 1)
    {
        printf("Invalid deposit amount.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    if (amount <= 0)
    {
        printf("Deposit amount must be positive.\n");
        return;
    }

    accounts[index].balance += amount;

    printf("\nDeposit successful!\n");
    printf("Updated Balance: %.2f\n",
           accounts[index].balance);
}

void WithdrawMoney(void)
{
    int accountNumber;
    int index;
    double amount;

    printf("\nEnter Account Number: ");

    if (scanf("%d", &accountNumber) != 1)
    {
        printf("Invalid account number.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    index = FindAccount(accountNumber);

    if (index == -1)
    {
        printf("Account not found.\n");
        return;
    }

    printf("Enter Withdrawal Amount: ");

    if (scanf("%lf", &amount) != 1)
    {
        printf("Invalid withdrawal amount.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        return;
    }

    if (amount <= 0)
    {
        printf("Withdrawal amount must be positive.\n");
        return;
    }

    if (amount > accounts[index].balance)
    {
        printf("Insufficient balance.\n");
        return;
    }

    accounts[index].balance -= amount;

    printf("\nWithdrawal successful!\n");
    printf("Remaining Balance: %.2f\n",
           accounts[index].balance);
}

void DisplayHighestBalance(void)
{
    int i;
    int highest = 0;

    if (accountCount == 0)
    {
        printf("\nNo accounts available.\n");
        return;
    }

    for (i = 1; i < accountCount; i++)
    {
        if (accounts[i].balance > accounts[highest].balance)
        {
            highest = i;
        }
    }

    printf("\n--- Account with Highest Balance ---\n");
    DisplayAccount(highest);
}