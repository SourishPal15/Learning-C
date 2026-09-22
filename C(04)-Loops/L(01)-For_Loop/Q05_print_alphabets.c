/* Q.5) Using for loop print the alphabets but ask for users choice whether to
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

    switch(c)
    {
        case 1:
        {
            char ch;
            printf("Alphabets in Uppercase: ");
            for(ch='A'; ch<='Z';ch++)
            {
                printf("%c ",ch);
            }
            break;
        }
        case 2:
        {
            char ch;
            printf("Alphabets in Lowercase: ");
            for(ch='a'; ch<='z';ch++)
            {
                printf("%c ",ch);
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