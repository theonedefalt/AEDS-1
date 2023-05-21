#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matrix[4][4];
    int sum = 0;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("Enter the element at [%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);

            if (col > row)
            {
                sum += matrix[row][col];
            }
        }
    }

    printf("The sum of elements below the main diagonal is: %d\n", sum);

    printf("The elements in the main diagonal are:\n");

    for (int k = 0; k < 4; k++)
    {
        printf("%d\n", matrix[k][k]);
    }

    return 0;
}
