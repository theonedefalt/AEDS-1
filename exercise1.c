#include <stdio.h>
#include <stdlib.h>

void fill_grades(float grade[], int size)
{
    printf("Enter the grades of %d students: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &grade[i]);
    }
}

void calculate_average(float grade[], int size)
{
    int count = 0;
    float average = 0, sum = 0;
    for (int j = 0; j < size; j++)
    {
        sum += grade[j];
    }

    average = sum / size;

    for (int j = 0; j < size; j++)
    {
        if (grade[j] > average)
        {
            count++;
        }
    }
    printf("The class average is: %.2f\n", average);
    printf("The count result is: %d\n", count);
}

int main(void)
{
    float grade[10];

    fill_grades(grade, 10);
    calculate_average(grade, 10);

    return 0;
}
