#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    int tam, maior = 0, menor = MAX_LEN;
    char string[MAX_LEN], big[MAX_LEN], small[MAX_LEN];

    while (1) {
        printf("Digite uma string (ou pressione Enter para encerrar): ");
        fgets(string, MAX_LEN, stdin);
        if (string[0] == '\n') // Verifica se a entrada é uma string vazia
            break;

        tam = strlen(string) - 1; // Subtrai 1 para descontar o caractere de nova linha

        if (tam > maior) {
            maior = tam;
            strcpy(big, string);
        }
        if (tam < menor) {
            menor = tam;
            strcpy(small, string);
        }
    }

    printf("A maior string digitada foi: %s", big);
    printf("A menor string digitada foi: %s", small);

    return 0;
}
