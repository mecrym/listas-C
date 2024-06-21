#include <stdio.h>
#include <stdlib.h>
/*Crie um procedimento para:

- ler dois valores reais, o primeiro menor que o segundo, caso não seja emita uma mensagem de erro e peça novamente, para definirem
  um intervalo; ( esses valores deverão ser globais)
- Crie outro procedimento para:
- ler a quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem números ímpares.

DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int), antes de testar se é impar*/
float limInf, limSup;

void limites(){
    do {
            printf("Digite um número para ser o limite inferior do intervalo: ");
            scanf("%f", &limInf);

            printf("Digite um número para ser o limite superior do intervalo: ");
            scanf("%f", &limSup);

            if (limInf >= limSup) {
                printf("ERRO: O limite inferior deve ser menor que o limite superior. Por favor, digite novamente.\n");
            }
    } while (limInf >= limSup);
}

void contador(){
    float valores=0;
    int quantidade=0, cont=0;
    //ler a quantidade de valores reais a serem testados
    printf("digite a quantidade de valores reais a serem testados: ");
    scanf("%d", &quantidade);
    //ler outros tantos valores quantos os indicados por essa quantidade
    printf("digite os valores a serem verificados: ");
    for(int i=0; i<=quantidade; i++){
        scanf("%f", &valores);
        //pertencentes ao do intervalo
        if(valores>=limInf && valores<=limSup){
            //contar e mostrar todos os valores lidos, cujas partes inteiras forem números ímpares
            int parteInteira=(int)valores;
            if(parteInteira%2!=0){
                cont++;
                printf("a parte inteira do numero %.2f e impar\n", valores);
            }
        }else{
            printf("o numero %.2f nao faz parte do intervalo\n", valores);
        }
    }
    printf("quantidade de numeros que tem a sua parte inteira como impar: %d\n", cont);
}

int main()
{
    limites();
    contador();

    return 0;
}
