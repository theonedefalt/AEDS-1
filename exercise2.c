#include <stdio.h>
#include <stdlib.h>

void fillArray(float X[], int size)
{
    float negativeValues[10];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%f", &X[i]);
    }
}

void *negativeValuesFunction(float X[], int size, float Y[], int *newSize)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (X[i] < 0)
        {
            Y[count] = X[i];
            count++;
        }
    }

    *newSize = count;
}

void displayArray(float X[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The content of array %d is: %2.f\n", i + 1, X[i]);
    }
}

int main(void)
{
    float X[10];
    int size = 10;

    fillArray(X, size);

    float negativeArray[10];
    int negativeSize = 0;

    negativeValuesFunction(X, size, negativeArray, &negativeSize);
    displayArray(negativeArray, negativeSize);

    return 0;
}
