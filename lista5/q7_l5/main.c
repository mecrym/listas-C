#include <stdio.h>
#include <stdlib.h>
/*Crie um procedimento para:

- ler dois valores inteiros positivos, limites para definirem um intervalo ( esses valores dever�o ser globais)
- ler uma quantidade de valores inteiros a serem testados;- Flag -1, um por vez;
- contar e mostrar dentre esses valores lidos os que forem m�ltiplos de 3, que n�o forem tamb�m m�ltiplos de 5, e
  perten�am ao intervalo.*/

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
        //contar e mostrar dentre esses valores lidos os que forem m�ltiplos de 2 e de 3, ao mesmo tempo, e perten�am ao intervalo.
            if(valores%3==0 && valores%5!=0){
                cont++;
                printf("SAO multiplo de 2 e NAO s�o multiplos de 5: %d\n", valores);
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
