#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Estrutura de dados para cilindro
struct cilindro {
    float diametroBase;
    float altura;
};

typedef struct cilindro cilindro;

// Função para calcular o volume do cilindro
float volume(cilindro A) {//deve passar o tipo!! tipo=cilindro e variavel=A
    float areaB;
    float r, v;
    float pi = 3.14;

    r = A.diametroBase / 2.0;
    areaB = pi * pow(r, 2);
    return areaB * A.altura;
}


int main() {
    cilindro A;

    printf("Digite o valor do diâmetro da base: \n");
    scanf("%f", &A.diametroBase);
    printf("Digite o valor da altura: \n");
    scanf("%f", &A.altura);

    // Chama a função volume e imprime o resultado
    float resultado = volume(A);//chama so a variavel e n o tipo
    printf("\nO volume do cilindro é: %.2f\n", resultado);

    //imprime novos valores
    printf("\nValor do diâmetro da base: %.2f\n", A.diametroBase);
    printf("Valor da altura: %.2f\n", A.altura);

    return 0;
}
