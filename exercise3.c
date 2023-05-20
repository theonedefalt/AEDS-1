#include <stdio.h>
#include <stdlib.h>

void preencher(int X[], int Y[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o %dº valor para X: ", i + 1);
        scanf("%d", &X[i]);
    }

    for (int j = 0; j < tamanho; j++)
    {
        printf("Digite o %dº valor para Y: ", j + 1);
        scanf("%d", &Y[j]);
    }
}

int *intercalar(int X[], int Y[], int tamanho)
{
    int *novoVetor = (int*)malloc(20 * sizeof (int));   
    int index = 0;

    for (int i = 0; i < tamanho; i++)
    {
        novoVetor[index] = Y[i];
        index++;
        novoVetor[index] = X[i];
        index++;
    }   

    return novoVetor;
}

void exibir(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("O conteudo do vetor na posição %d é: %d\n", i, vetor[i]);
    }
}

int main(void)
{
    int X[10];
    int Y[10];
    int tamanho = 10;

    preencher(X, Y, tamanho);

    int *novoVetor = intercalar(X, Y, tamanho * 2);

    exibir(novoVetor, tamanho * 2);

    free(novoVetor);
    return 0;
}
