#include <stdio.h>
#include <stdlib.h>
/*Crie um procedimento para:

- ler dois valores inteiros positivos, limites para definirem um intervalo ( esses valores deverão ser globais)
- ler uma quantidade de valores inteiros a serem testados;- Flag -1, um por vez;
- contar e mostrar dentre esses valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e
  pertençam ao intervalo.*/

int limInf, limSup;//LIMITES!!!!

//n precisa passar valor nem parametro
void limite(){
    printf("digite um numero para ser o limite inferior do intervalo: ");
    scanf("%d", &limInf);
    printf("digite um numero para ser o limite superior do intervalo: ");
    scanf("%d", &limSup);
}

void teste(){
    int valores=0, cont=0;

    printf("digite os valores a serem testados: ");

    while(valores != -1){//a leitura deve estar dentro do loop para evitar um loop infinito!!!!!

        scanf("%d", &valores);

        if(valores>=limInf && valores<=limSup){
        //contar e mostrar dentre esses valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.
            if(valores%3==0 && valores%5!=0){
                cont++;
                printf("SAO multiplo de 2 e NAO são multiplos de 5: %d\n", valores);
            }
        }else{
            if(valores!=-1){
                printf("o numero %d nao faz parte do intervalo\n", valores);
            }

        }
    }
}

int main(){

    limite();
    teste();

    return 0;
}
