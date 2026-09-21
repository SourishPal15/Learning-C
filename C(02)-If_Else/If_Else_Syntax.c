// This lesson contains the syntax of if-else and various types of if-else statements

#include <stdio.h>

int main()
{
    printf("Read the comments of this lesson");

    return 0;
}

/*

We can classify them into three types:

1) If Statement:

in this we only use one single if statement, if the condition is true, 
then the block of code written in the if statement executes.
syntax:

if([condition])
{
    [code]
}

2) If-else Statement:

in this, if the condition in if statement is true then it is executed,
otherwise the code written in else statement is executed.
syntax:

if([condition])
{
    [code]
}
else
{
    [code]
}

3) If=else if-else Ladder statement:

in this, if the condition inside if statement is true then the code is 
executed, otherwise it goes to the next else if statement and there if 
the condition ia true then the code inside else if is executed otherwise
at last the else code is executed, we can use as many else if statements
as per our requirement in the program, hence it is called as 'ladder'.
syntax:

if([condition])
{
    [code]
}
else if([condition])
{
    [code]
}
else
{
    [code]
}

*/