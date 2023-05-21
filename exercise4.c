#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int temperature[31];
    int highestTemperature = 0, lowestTemperature = 41, sum = 0;
    float averageTemperature;
    int count = 0;

    for (int i = 0; i < 31; i++)
    {
        printf("Enter the temperature for day %d of January: ", i + 1);
        scanf("%d", &temperature[i]);

        if (temperature[i] < 15 || temperature[i] > 40)
        {
            printf("Invalid temperature. Please enter again.\n");
            i--;
            continue;
        }
    }

    for (int j = 0; j < 31; j++)
    {
        if (highestTemperature < temperature[j])
        {
            highestTemperature = temperature[j];
        }

        if (lowestTemperature > temperature[j])
        {
            lowestTemperature = temperature[j];
        }

        sum += temperature[j];
        averageTemperature = (float)sum / 31;
    }

    for (int k = 0; k < 31; k++)
    {
        if (temperature[k] < averageTemperature)
        {
            count++;
        }
    }

    printf("The highest temperature recorded was: %d°C\n", highestTemperature);
    printf("The lowest temperature recorded was: %d°C\n", lowestTemperature);
    printf("The average temperature recorded was: %.2f°C\n", averageTemperature);
    printf("The number of days with temperatures below the average was: %d\n", count);

    return 0;
}
