#include <stdio.h>
#include <stdlib.h>

/*Elabore uma fun��o para calcular e retornar o Fatorial de um n�mero passado por par�metro.
  Fa�a tamb�m um programa principal que chame essa fun��o.
*/

int calcFatorial(int n){
    int fatorial=1;

    for(int i=n; i>0; i--){
        fatorial*=i;
    }
    return fatorial;
}

int main()
{
    int n;
    int resultado;

    printf("digite um valor para 'n': ");
    scanf("%d", &n);

    resultado=calcFatorial(n);
    printf("fatorial de %d: %d", n, resultado);

    return 0;
}

