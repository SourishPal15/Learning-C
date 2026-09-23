// This leasson teaches about recursion and its udage in C language

#include <stdio.h>

int main()
{
    printf("Read the comments of this lesson");

    return 0;
}

/*

A function defined in C can call itself, this is called recursion. A function calling 
itself is also called a recursive function

Why we use Recursion?

1) Recursion is often a direct way to implement certain algorithms, usually it is 
suited for problems that can be divided into smaller similar sub-problems.

2) There is a condtion in a recursive function that stop further recursion, it is 
called base case, it prevents infinite recursion and ensures that the function 
terminates correctly.

3) Sometimes due ti an oversight by the programmer, a recursive function can 
continue to run infinitely without reaching the base case, potentially causing
a stack overflow or memory error.

Recursion related programs are discussed in details in "C(06)-Recursion" folder

*/