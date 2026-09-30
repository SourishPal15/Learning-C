// This lesson teaches about arrays in C language 

#include <stdio.h>

int main()
{
    printf("Read the comments of this lesson");

    return 0;
}

/* 

An array is a collection of multiple values of the same data type,
stored under one variable name.

Why do we need arrays?
Suppose you want to store marks of 5 students.
Without an array:

        int mark1 = 85;
        int mark2 = 72;
        int mark3 = 91;
        int mark4 = 68;
        int mark5 = 88;

That's inconvenient because you need 5 different variables.

With an array: int marks[5] = {85, 72, 91, 68, 88};
Now all 5 values are stored in one variable called marks

The basic syntax is: data_type array_name[size];

For example: int marks[5];

This creates an integer array that can store 5 integers.
You can also initialize it immediately:
int marks[5] = {85, 72, 91, 68, 88};

Array indexing:

C arrays start from index 0, not 1.

Array:    85    72    91    68    88
Index:     0     1     2     3     4

So:
        marks[0]   // 85
        marks[1]   // 72
        marks[2]   // 91
        marks[3]   // 68
        marks[4]   // 88

*/