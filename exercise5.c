#include <stdio.h>
#include <stdlib.h>

void preencher(int M[][5], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    { 
        for (int j = 0; j < tamanho; j++)
        {
            printf("Preencha o elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

int calcA(int M[][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += M[3][i];
    }
    return soma;
}

int calcB(int M[][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += M[i][1];
    }
    return soma;
}

int calcC(int M[][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += M[i][i];
    }
    return soma;
}

int calcD(int M[][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += M[i][4 - i];
    }
    return soma;
}

int calcE(int M[][5])
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += M[i][j];
        }
    }
    return soma;
}

int main(void)
{
    int M[5][5];

    preencher(M, 5);

    printf("A soma da linha 4 e: %d\n", calcA(M));
    printf("A soma da coluna 2 e: %d\n", calcB(M));
    printf("A soma da diagonal principal e: %d\n", calcC(M));
    printf("A soma da diagonal secundária e: %d\n", calcD(M));
    printf("A soma de todos os elementos da matriz e: %d\n", calcE(M));

    return 0;
}
