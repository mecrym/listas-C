#include <stdio.h>
#include <stdlib.h>
//Construa um algoritmo que receba como entrada três valores (A,B e C). 
//Após o processamento o menor valor deverá estar em A e o maior valor em C, e o valor intermediário em B. 
//Imprima A,B e C.

int main() {
    float A, B, C, temp;

    // Recebendo os valores do usuário
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Ordenando os valores
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    // Imprimindo os valores ordenados
    printf("A: %.2f\n", A);
    printf("B: %.2f\n", B);
    printf("C: %.2f\n", C);

    return 0;
}
