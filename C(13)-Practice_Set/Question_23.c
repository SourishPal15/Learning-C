/* Q.23) Design a program to perform matrix operation: Addition, Subtraction, transpose */

#include <stdio.h>

void readMatrix(int r, int c, int a[r][c])
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void displayMatrix(int r, int c, int a[r][c])
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int r, int c, int a[r][c], int b[r][c])
{
    int i, j, sum[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nAddition of Matrix 1 and Matrix 2:\n");
    displayMatrix(r, c, sum);
}

void subtractMatrix(int r, int c, int a[r][c], int b[r][c])
{
    int i, j, diff[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nSubtraction of Matrix 1 and Matrix 2:\n");
    displayMatrix(r, c, diff);
}

void transposeMatrix(int r, int c, int a[r][c])
{
    int i, j, trans[c][r];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            trans[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of Matrix:\n");
    displayMatrix(c, r, trans);
}

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix 1: ");

    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0)
    {
        printf("Invalid matrix dimensions!\n");
        return 1;
    }

    printf("Enter rows and columns of Matrix 2: ");

    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0)
    {
        printf("Invalid matrix dimensions!\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2];

    printf("\nEnter elements of Matrix 1:\n");
    readMatrix(r1, c1, a);

    printf("\nEnter elements of Matrix 2:\n");
    readMatrix(r2, c2, b);

    printf("\n========== MATRIX 1 ==========\n");
    displayMatrix(r1, c1, a);

    printf("\n========== MATRIX 2 ==========\n");
    displayMatrix(r2, c2, b);

    if (r1 == r2 && c1 == c2)
    {
        addMatrix(r1, c1, a, b);
        subtractMatrix(r1, c1, a, b);
    }
    else
    {
        printf("\nAddition is not possible! Dimensions must be equal.\n");
        printf("Subtraction is not possible! Dimensions must be equal.\n");
    }

    transposeMatrix(r1, c1, a);
    transposeMatrix(r2, c2, b);

    return 0;
}