#include <stdio.h>
#include <stdlib.h>

float Rmedia(int vetor[10]) {
    int soma = 0;
    int cont = 0; // contador de elementos
    int valor;

    printf("Digite os elementos do vetor (digite -1 para parar):\n");

    // Lê até 10 elementos ou até encontrar -1
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valor);
        if (valor == -1) {
            break; // sai do loop se encontrar -1
        }
        vetor[i] = valor;
        cont++;
    }

    // Calcula a soma dos elementos lidos
    for (int i = 0; i < cont; i++) {
        soma += vetor[i];
    }

    // Retorna a média
    return (float)soma / cont;
}

int somaElementos(int cont, int vetor[10], float media) {
    int resultado = 0;

    // Soma os elementos maiores que a média
    for (int i = 0; i < cont; i++) {
        if (vetor[i] > media) {
            resultado += vetor[i];
        }
    }

    return resultado;
}

int main() {
    int vetor[10];
    float media;

    media = Rmedia(vetor);
    int cont = 0; // contador de elementos

    // Calcula o número de elementos no vetor
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == -1) {
            break; // sai do loop se encontrar -1
        }
        cont++;
    }

    int resultado = somaElementos(cont, vetor, media);

    printf("Soma dos elementos maiores que a média: %d\n", resultado);

    return 0;
}
