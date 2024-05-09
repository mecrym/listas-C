#include <stdio.h>
#include <stdlib.h>

int main(){
    /*6. Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é 
        divisível por Y e por Z.O algoritmo deverá mostrar as possíveis mensagens:
    1. o número é divisível por Y e Z.
    2. o número é divisível por Y mas não por Z.
    3. o número é divisível por Z mas não por Y.
    4. o número não é divisível nem Y nem por Z*/
    int x, y, z;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    if(x % y == 0 && x % z == 0){
        printf("O número é divisível por Y e Z.\n");
    }else if(x % y == 0 && x % z != 0){
        printf("O número é divisível por Y mas não por Z.\n");
    }else if(x % y != 0 && x % z == 0){
        printf("O número é divisível por Z mas não por Y.\n");
    }else{
        printf("O número não é divisível nem Y nem por Z.\n");
    }

    return 0;
}