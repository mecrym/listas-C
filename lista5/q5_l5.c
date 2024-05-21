#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*- ler dois valores inteiros positivos, limites para definirem um intervalo; ( esses valores deverão ser globais
- ler uma quantidade de valores inteiros a serem testados – FLAG -1; um por vez;
- contar e mostrar dentre esses valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.*/
int main(){
    int x, y;
    printf("Digite dois valores inteiros positivos: ");
    scanf("%d %d", &x, &y);
    procedimentos(x, y);
    return 0;
}

void procedimentos(x, y){
    int c;
    printf("Digite um valor inteiro: ");
    if(x<y){
        for(int a=0; a!=-1; a++){
            scanf("%d", &c);
            if(a==-1){
                printf("Fim do programa. Valor digitado foi -1.");
                break;
            }
            else if(a%2==0 && a%3==0 && a>=x && a<=y){
                printf("O valor %d é múltiplo de 2 e 3 e pertence ao intervalo.\n", a);
            }
        }
    }else if(y>x){
        for(int a=0; a!=-1; a++){
            scanf("%d", &c);
            if(a==-1){
                printf("Fim do programa. Valor digitado foi -1.");
                break;
            }
            else if(a%2==0 && a%3==0 && a>=y && a<=x){
                printf("O valor %d é múltiplo de 2 e 3 e pertence ao intervalo.\n", a);
            }
        }
    }
}