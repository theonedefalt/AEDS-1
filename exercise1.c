#include <stdio.h>
#include <stdlib.h>

void preencher_notas(float nota[], int tamanho) {
  printf("Digite a nota dos %d alunos: ");
  for (int i = 0; i < tamanho; i++) {
    scanf("%f", &nota[i]);
  }
}

void calc_media(float nota[], int tamanho) {
  int count = 0;
  float media = 0, soma = 0;
  for (int j = 0; j < tamanho; j++) {
    soma += nota[j];
  }

  media = soma / tamanho;

  for (int j = 0; j < tamanho; j++) {
    if (nota[j] > media) {
      count++;
    }
  }
  printf("A média da turma é: %.2f\n", media);
  printf("O resultado da contagem é: %d\n", count);
}

int main(void) {
  float nota[10];

  preencher_notas(nota, 10);
  calc_media(nota, 10);

  return 0;
}
