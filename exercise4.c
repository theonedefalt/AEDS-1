#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int temperatura[31];
    int maiorTemperatura = 0, menorTemperatura = 41, soma = 0;
    float temperaturaMedia;
    int count = 0;

    for (int i = 0; i < 31; i++)
    {
        printf("Digite a temperatura do %dº dia de janeiro: ", i + 1);
        scanf("%d", &temperatura[i]);

        if (temperatura[i] < 15 || temperatura[i] > 40)
        {
            printf("Temperatura invalida. Digite novamente.\n");
            i--;
            continue;
        }
    }

    for (int j = 0; j < 31; j++)
    {
        if (maiorTemperatura < temperatura[j])
        {
            maiorTemperatura = temperatura[j];
        }

        if (menorTemperatura > temperatura[j])
        {
            menorTemperatura = temperatura[j];
        }

        soma += temperatura[j];
        temperaturaMedia = (float)soma / 31;
    }

    for (int k = 0; k < 31; k++)
    {
        if (temperatura[k] < temperaturaMedia)
        {
            count++;
        }
    }

    printf("A maior temperatura ocorria foi: %d°C\n", maiorTemperatura);
    printf("A menor temperatura ocorria foi: %d°C\n", menorTemperatura);
    printf("A temperatura média ocorria foi: %.2f°C\n", temperaturaMedia);
    printf("O número de dias nos quais a temperatura foi inferior a temperatura média foi: %d\n", count);

    return 0;
}
