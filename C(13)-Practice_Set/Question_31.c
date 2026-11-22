/* Q.31) Develop a C program in the context of a library management system to declare a structure
Book containing members: Title, Author, No_of_Pages, and Price. Create an array of N
such books, populate it, and display the book(s) with the highest price and their
corresponding author(s). The data type of the structure members should be decided
judiciously. */

#include <stdio.h>

struct Book
{
    char Title[100];
    char Author[100];
    int No_of_Pages;
    float Price;
};

int main()
{
    struct Book b[100];
    int n, i;
    float max;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter details of Book %d:\n", i+1);

        printf("Title: ");
        scanf(" %[^\n]", b[i].Title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].Author);

        printf("Number of Pages: ");
        scanf("%d", &b[i].No_of_Pages);

        printf("Price: ");
        scanf("%f", &b[i].Price);
    }

    max = b[0].Price;

    for(i=1; i<n; i++)
    {
        if(b[i].Price > max)
            max = b[i].Price;
    }

    printf("\n========== Highest Priced Book(s) ==========\n");

    for(i=0; i<n; i++)
    {
        if(b[i].Price == max)
        {
            printf("\nTitle: %s", b[i].Title);
            printf("\nAuthor: %s", b[i].Author);
            printf("\nNumber of Pages: %d", b[i].No_of_Pages);
            printf("\nPrice: Rs. %.2f\n", b[i].Price);
        }
    }

    return 0;
}