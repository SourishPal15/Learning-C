// This lessom contains the syntax of switch case statement 

#include <stdio.h>

int main()
{
    printf("Read the comments of this lesson");

    return 0;
}

/* 

In switch case conditional statements we are giving/guiding the program
to do a specific task based on the switch value that we have provided, and
based on that different cases would work.

NOTE: You can use the switch as int data type or maybe char data type
based on the requirement of the program. 

Syntax:

#include <stdio.h>

int main()
{
    int c;
    printf("Enterr choice: ");
    scanf("%d", &c);

    switch(c)
    {
        case 0:
        {
            [code]
            break;
        }
        case 1:
        {
            [code]
            break;
        }
        case 2:
        {
            [code]
            break;
        }
        case n: // we are considering 'n' number of choices
        {
            [code]
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

*/