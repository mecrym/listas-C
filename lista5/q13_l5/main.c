#include <stdio.h>
#include <stdlib.h>

/*
    Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver em uma variável
    passada por referência o termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado
    o valor 6, então deverá retorna o 6º termo da série ou seja 1,1,2,3,5,8, ou seja, deverá atribuir a variável Fib o valor 8.*/

void fibonacci(int n, int *resultado){
    printf("digite a posicao do termo que deseja: ");
    scanf("%d", &n);

    if(n<=0){
        resultado=0;
    }else if(n==1){
        resultado=1;
    }else{
        int primeiro=1;
        int segundo=0;
        int proximo=1;

        for(int i=0; i<n; i++){
            proximo=primeiro+segundo;
            segundo=proximo;
            primeiro=segundo;

            printf("%d ", proximo);
        }
        printf("\n termo desejado: %d", proximo);
    }

}
int main()
{
    int n=0;
    int resultado;

    fibonacci(n, &resultado);
    printf("\n");
    return 0;
}
