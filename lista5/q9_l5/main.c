#include <stdio.h>
#include <stdlib.h>

/*Crie um procedimento para:

- ler dois valores reais, maiores que 0 e menores que 1, caso não seja emita uma mensagem de erro e peça novamente,
  para definirem um intervalo de precisão; ( esses valores deverão ser globais)*/
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

int main()
{
    limites();
    return 0;
}
