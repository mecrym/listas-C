//3 + 25 = 55
//55^2 = 3025
//Fazer um algoritmo que dado um número de 4 dígitos (verifique se o número pertence a faixa) 
//calcule e escreva se ele possui ou não esta característica.
#include <stdio.h>
#include <math.h>

int main(){
    int numero, primeiro, soma;
    float segundo, quadrado;
    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &numero);

    if(numero>999 && numero<10000){
        segundo=numero%100;
        primeiro=numero/100;
        soma=primeiro+segundo;
        quadrado=pow(soma, 2);

        printf("A soma dos dois primeiros dígitos é: %d\n", soma);
        printf("%d\n", soma);
        printf("O quadrado da soma é: %1.f\n", quadrado);

        if(quadrado==numero){
            printf("O número %d possui a característica\n", numero);
        }else{
        printf("Número inválido.\n");
        }
    }
    return 0;
    
}

