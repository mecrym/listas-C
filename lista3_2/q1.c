#include <stdio.h>

int main() {
    //ler conjunto de numeros X
    int n, Qpares=0, Qimpares=0;
    printf("digite o numero que deseja verificar, lembre que 9999 simboliza o fim da leitura:\n");
    //verificar se o numero é par ou ímpar
    do{
        scanf("%d", &n);
        if(n%2==0){
            Qpares++;
        }else{
            Qimpares++;
        }
    //9999 é usado para o fim da leitura
    }while(n!=9999);
    //imprimir quanditades de numeros pares
    printf("Quantidade de numeros pares: %d\n", Qpares);
    //imprimir quantidade de numeros impares
    printf("Quantidade de numeros impares: %d\n", Qimpares);
    return 0;
}