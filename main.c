#include <stdio.h>

void troca(int v[], int i, int f) {
  int aux = v[i];
  v[i] = v[f];
  v[f] = aux;
}

void inverterVetor(int v[], int inicio, int fim) {
  if (inicio < fim) {
    troca(v, inicio, fim);
    inverterVetor(v, inicio + 1, fim - 1);
  }
}

int main() {
  int vetor[6] = {1, 2, 3, 4, 5, 6};
  inverterVetor(vetor, 0, 5);
  for (int i = 0; i < 6; i++) {
    printf("%i", vetor[i]);
  }
}