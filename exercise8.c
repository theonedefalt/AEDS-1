#include <stdio.h>

void fill(int M[][10])
{
    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column < 10; column++)
        {
            printf("Enter the element [%d][%d] of matrix M: ", row, column);
            scanf("%d", &M[row][column]);
        }
    }

    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column < 10; column++)
        {
            printf("%d | ", M[row][column]);
        }
        printf("\n");
    }
}

void swapA(int M[][10], int row1, int row2)
{
    int swap;

    for (int column = 0; column < 10; column++)
    {
        swap = M[row1][column];
        M[row1][column] = M[row2][column];
        M[row2][column] = swap;
    }
}

void swapB(int M[][10], int column1, int column2)
{
    int swap;

    for (int row = 0; row < 10; row++)
    {
        swap = M[row][column1];
        M[row][column1] = M[row][column2];
        M[row][column2] = swap;
    }
}

void swapC(int M[][10])
{
    int swap;

    for (int i = 0; i < 10; i++)
    {
        swap = M[i][i];
        M[i][i] = M[i][9 - 1];
        M[i][9 - 1] = swap;
    }
}

void swapD(int M[][10], int row, int column)
{
    int swap;

    for (int i = 0; i < 10; i++)
    {
        swap = M[row][i];
        M[row][i] = M[i][column];
        M[i][column] = swap;
    }
}

void displayMatrix(int matrix[][10])
{
    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column < 10; column++)
        {
            printf("%d | ", matrix[row][column]);
        }
        printf("\n");
    }
}

int main(void)
{
    int M[10][10];

    fill(M);

    swapA(M, 1, 7);
    printf("The matrix after swapping row 2 with row 8 is: \n");
    displayMatrix(M);

    swapB(M, 3, 9);
    printf("The matrix after swapping column 4 with column 10 is: \n");
    displayMatrix(M);

    swapC(M);
    printf("The matrix after swapping the main diagonal with the secondary diagonal is: \n");
    displayMatrix(M);

    swapD(M, 4, 9);
    printf("The matrix after swapping row 5 with column 10 is: \n");
    displayMatrix(M);

    return 0;
}
