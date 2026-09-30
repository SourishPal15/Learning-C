// This lesson teaches about pointers in C language

#include <stdio.h>

int main()
{
    printf("Read the comments of this lesson");

    return 0;
}

/*

A pointer is a variable that stores the address
of another variable.

int *p;

This means:

p is a pointer to an integer.

Now:

int n = 10;
int *p = &n;

The three important symbols


& — Address-of operator: &n
Means: Give me the address of n.

Example: int n = 10;
         printf("%p", (void *)&n);

This prints the address of n.

* — Dereference operator:
Suppose: int n = 10;
         int *p = &n;
Then: *p
means: Go to the address stored in p and give me the
value there.

Since p contains the address of n:

p  → address of n
*p → value of n

Therefore: printf("%d", *p);
prints: 10

* when declaring a pointer
There is another use:

int *p;
Here * means:
p is a pointer.

But here:
*p
* means:
Access the value at the address stored in p.

So the same symbol has different uses depending
on where it appears.

*/