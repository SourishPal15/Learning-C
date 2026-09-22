/* Q.5) Using do-while loop print the alphabets but ask for users choice whether to
print in uppercase or lowercase */

#include <stdio.h>

int main()
{
    int c;
    printf("--------------------\n");
    printf("1 for Uppercase\n");
    printf("2 for Lowercase\n");
    printf("--------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
    {
        char ch;
        printf("Alphabets in Uppercase: ");

        ch = 'A';
        do
        {
            printf("%c ", ch);
            ch++;
        } while (ch <= 'Z');
        break;
    }
    case 2:
    {
        char ch;
        printf("Alphabets in Lowercase: ");

        ch = 'a';
        do
        {
            printf("%c ", ch);
            ch++;
        } while (ch <= 'z');
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