#include <stdio.h>
#include <stdlib.h>

void fillMatrix(int A[][6], int B[][6])
{
    for (int rowA = 0; rowA < 4; rowA++)
    {
        for (int colA = 0; colA < 6; colA++)
        {
            printf("Enter the element [%d][%d] of matrix A: ", rowA, colA);
            scanf("%d", &A[rowA][colA]);
        }
    }

    for (int rowB = 0; rowB < 4; rowB++)
    {
        for (int colB = 0; colB < 6; colB++)
        {
            printf("Enter the element [%d][%d] of matrix B: ", rowB, colB);
            scanf("%d", &B[rowB][colB]);
        }
    }
}

void sumMatrices(int A[][6], int B[][6], int S[][6])
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 6; col++)
        {
            S[row][col] = A[row][col] + B[row][col];
        }
    }
}

void differenceMatrices(int A[][6], int B[][6], int D[][6])
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 6; col++)
        {
            if (A[row][col] < B[row][col])
            {
                D[row][col] = B[row][col] - A[row][col];
            }
            else
            {
                D[row][col] = A[row][col] - B[row][col];
            }
        }
    }
}

void printMatrix(int matrix[][6])
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 6; col++)
        {
            printf("%d | ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main(void)
{
    int A[4][6], B[4][6], S[4][6], D[4][6];

    fillMatrix(A, B);

    sumMatrices(A, B, S);
    printf("The matrix S resulting from the sum of matrices A and B is:\n");
    printMatrix(S);

    differenceMatrices(A, B, D);
    printf("The matrix D resulting from the difference of matrices A and B is:\n");
    printMatrix(D);

    return 0;
}
