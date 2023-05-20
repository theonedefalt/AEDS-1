#include <stdio.h>
#include <stdlib.h>

void preencher(float X[], int tamanho)
{
    float valorNegativo[10];
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &X[i]);
    }
}

void *funcaoValorNegativo(float X[], int tamanho, float Y[], int *tamanhoNovo)
{
    int count = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (X[i] < 0)
        {
            Y[count] = X[i];
            count++;
        }
    }

    *tamanhoNovo = count;
}

void exibir(float X[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("O conteudo do vetor %d e: %2.f\n", i + 1, X[i]);
    }
}

int main(void)
{
    float X[10];
    int tamanho = 10;

    preencher(X, tamanho);

    float vetorNegativo[10];
    int tamanhoNegativo = 0;

    funcaoValorNegativo(X, tamanho, vetorNegativo, &tamanhoNegativo);
    exibir(vetorNegativo, tamanhoNegativo);

    return 0;
}
