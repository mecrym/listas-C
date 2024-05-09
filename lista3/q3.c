#include <stdio.h>
int main(){
    //Leia um número e imprima os números impares de 1 até esse número.
    int n;
    int i;
    //int impar;
    printf("Digite um numero: ");

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    return 0;
}