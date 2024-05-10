#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario;
    int nFilhos, cont = 0;

    // Média do salário da população;
    // Média do número de filhos;
    // Maior salário;
    // Percentual de pessoas com salário até R$100,00.

    float somaSalarios = 0;
    int somaFilhos = 0;
    float maiorSalario = 0;
    int abaixo100 = 0;

    // Leitura dos dados
    while (1) {
        scanf("%f", &salario);
        scanf("%d", &nFilhos);
        if (salario < 0 || nFilhos<0)
            break;

        // Somando os salários e número de filhos
        somaSalarios += salario;
        somaFilhos += nFilhos;

        // Verificando o maior salário
        if (salario > maiorSalario)
            maiorSalario = salario;

        // Contando pessoas com salário até R$100,00
        if (salario <= 100)
            abaixo100++;

        cont++;
    }

    // Média do salário da população
    float mediaSalarios = somaSalarios / cont;

    // Média do número de filhos
    int mediaFilhos = somaFilhos / cont;

    // Exibindo resultados
    //printf("%d\n", cont);
    printf("%.2f\n", mediaSalarios);
    printf("%.d\n", mediaFilhos);
    printf("%.2f\n", maiorSalario);
    printf("%.2f\n", (float)abaixo100 / cont * 100);

    return 0;
}
