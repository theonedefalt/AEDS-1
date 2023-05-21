#include <stdio.h>
#include <stdlib.h>

void fillArrays(int X[], int Y[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth value for X: ", i + 1);
        scanf("%d", &X[i]);
    }

    for (int j = 0; j < size; j++)
    {
        printf("Enter the %dth value for Y: ", j + 1);
        scanf("%d", &Y[j]);
    }
}

int *interleaveArrays(int X[], int Y[], int size)
{
    int *newArray = (int*)malloc(20 * sizeof(int));
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        newArray[index] = Y[i];
        index++;
        newArray[index] = X[i];
        index++;
    }

    return newArray;
}

void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The content of the array at position %d is: %d\n", i, array[i]);
    }
}

int main(void)
{
    int X[10];
    int Y[10];
    int size = 10;

    fillArrays(X, Y, size);

    int *newArray = interleaveArrays(X, Y, size * 2);

    displayArray(newArray, size * 2);

    free(newArray);
    return 0;
}
