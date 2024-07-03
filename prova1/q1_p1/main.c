#include <stdio.h>
#include <stdlib.h>

// Percorrer de a até b e somar todos os divisores de cada número
// Quantos são divisíveis por 2 e 3

int main()
{
    int a, b;
    int soma;
    int aux;

    printf("Digite A: ");
    scanf("%i", &a);
    printf("Digite B: ");
    scanf("%i", &b);

    if (a > b) {
        aux = b;
        b = a;
        a = aux;
    } else if (a == b) {
        printf("a e igual a b, nao ha numeros inteiros nesse intervalo\n");
        return 0; // Adicionado: Encerrar o programa se a for igual a b
    }

    for (int i = a; i <= b; i++) {
        soma = 0; // Adicionado: Resetar a variável soma a cada iteração do loop externo
        for (int j = 1; j <= i; j++) { // Alterado: j <= i em vez de j <= a
            if (i % j == 0) { // Alterado: i % j em vez de a % j
                soma = soma + j; // Alterado: soma += j substituído por soma = soma + j
            }
        }
        if (i % 2 == 0 && i % 3 == 0) { // Alterado: i % 2 e i % 3 em vez de a % 2 e a % 3
            printf("%i e divisivel por 2 e 3\n", i);
        }
        printf("Soma dos divisores de %i: %i\n", i, soma);
    }

    return 0;
}
