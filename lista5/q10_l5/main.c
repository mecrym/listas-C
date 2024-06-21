#include <stdio.h>
#include <stdlib.h>
/*Crie um procedimento para:
    - ler uma quantidade de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;
    - contar e mostrar todos os valores lidos que tenham suas partes fracionárias ao intervalo de precisão.
    - DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int), e obter a parte fracionária mediante a
      subtração da parte inteira, antes de testar.
  nao entendi nd do enunciado... q intervalo????????*/

float limInf, limSup;

void limites(){
    do {
        printf("Digite um valor para o limite inferior (maior que 0 e menor que 1): ");
        scanf("%f", &limInf);

        printf("Digite um valor para o limite superior (maior que 0 e menor que 1): ");
        scanf("%f", &limSup);

        if (limInf < 0 || limInf > 1 || limSup < 0 || limSup > 1) {
            printf("\nERRO: Os limites devem estar entre 0 e 1 (exclusivos). Por favor, digite novamente.\n");
        } else if (limInf > limSup) {
            printf("\nERRO: O limite inferior deve ser menor que o limite superior. Por favor, digite novamente.\n");
        }else if(limInf==limSup){
            printf("\nERRO: O limite inferior deve ser diferente do limite superior. Por favor, digite novamente.\n");
        }else {
            printf("\nSucesso, limite inferior: %.2f e limite superior: %.2f\n", limInf, limSup);
        }
    } while (limInf < 0 || limInf > 1 || limSup < 0 || limSup > 1 || limInf > limSup || limInf==limSup);
}

void testes(){
    int quantidade=0;
    float valores=0;

    printf("digite a quantidade de valores a serem testados: ");
    scanf("%f", &quantidade);

}
int main()
{
    limites();
    testes();

    return 0;
}
