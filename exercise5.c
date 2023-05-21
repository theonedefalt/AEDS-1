#include <stdio.h>
#include <stdlib.h>

void fillMatrix(int M[][5], int size)
{
    for (int i = 0; i < size; i++)
    { 
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element at [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

int calculateA(int M[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += M[3][i];
    }
    return sum;
}

int calculateB(int M[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += M[i][1];
    }
    return sum;
}

int calculateC(int M[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += M[i][i];
    }
    return sum;
}

int calculateD(int M[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += M[i][4 - i];
    }
    return sum;
}

int calculateE(int M[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += M[i][j];
        }
    }
    return sum;
}

int main(void)
{
    int M[5][5];

    fillMatrix(M, 5);

    printf("The sum of the elements in row 4 is: %d\n", calculateA(M));
    printf("The sum of the elements in column 2 is: %d\n", calculateB(M));
    printf("The sum of the elements in the main diagonal is: %d\n", calculateC(M));
    printf("The sum of the elements in the secondary diagonal is: %d\n", calculateD(M));
    printf("The sum of all elements in the matrix is: %d\n", calculateE(M));

    return 0;
}
