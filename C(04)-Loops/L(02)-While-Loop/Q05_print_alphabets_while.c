/* Q.5) Using while loop print the alphabets but ask for users choice whether to
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
        while (ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
        break;
    }
    case 2:
    {
        char ch;
        printf("Alphabets in Lowercase: ");

        ch = 'a';
        while (ch <= 'z')
        {
            printf("%c ", ch);
            ch++;
        }
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