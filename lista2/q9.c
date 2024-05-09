/*Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.
    
    Exemplo:929, 44, 97379. 
    
    Fazer um algoritmo que dado um número de 5 dígitos; calcule e escreva se este e ou não palíndromo.*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero, primeiro, segundo, quarto, quinto;
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &numero);

    if(numero>0 && numero<100000){
        quinto=numero%10;
        numero=numero/10;
        quarto=numero%10;
        numero=numero/10;
        primeiro=numero/100;
        segundo=numero%10;

        if(primeiro==quinto && segundo==quarto){
            printf("O número é palíndromo.\n");
        }else{
            printf("O número não é palíndromo.\n");
        }
    }else{
        printf("Número inválido.\n");
    }
    return 0;
    
}