#include <stdio.h>
#include <stdlib.h>

/*
    Elabore um procedimento para calcular o Fatorial de um número passado por parâmetro.
    A resposta deverá ser retornada em uma variável passada por referência. Faça também um programa principal
    que chame esse procedimento.*/

void calcFatorial(int numero){
    int fatorial=1;
    for(int i=numero; i>0; i--){
        fatorial=fatorial*i;
        printf("fatorial: %d\n", fatorial);
    }
    printf("\nfatorial: %d\n", fatorial);
}
int main()
{
    int numero=0;
    printf("digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &numero);

    calcFatorial(numero);

    return 0;
}
