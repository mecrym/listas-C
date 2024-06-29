#include <stdio.h>
#include <stdlib.h>
//imprimir sequencia de numeros com recursividade até 0

void imprimirCrescente(int n){
    if(n==0){
        printf("%d", n);
    }else{
        imprimirCrescente(n-1);
        printf("%d", n);
    }
}

void funcionamentoRecursividade(int x){
     if(x==0){
        printf("%d ", x);
    }else{
        printf("%d ", x);
        funcionamentoRecursividade(x-1);
        printf("%d ", x);
    }
}

void imprimirDecrescente(int y){
    if(y==0){
        printf("%d", y);
    }else{
        printf("%d", y);
        imprimirDecrescente(y-1);
    }
}

int main()
{
    int number=0;
    printf("digite n: ");
    scanf("%d", &number);

    printf("\n");
    imprimirCrescente(number);

    printf("\n");
    funcionamentoRecursividade(number);

    printf("\n");
    imprimirDecrescente(number);


    return 0;
}
