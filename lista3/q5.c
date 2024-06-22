/*A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... .
Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série de 1 até este enésimo termo.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, primeiro = 1 , segundo = 0, proximo=1;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num>2)
    {
        for (int i = 0; i < num; i++)
        {
            //printf("%d ", proximo);  n tem necessidade se colocar primeiro=1 e segundo =0 no lugar de primeiro =0 e segundo =1 
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;

            printf("%d ", proximo);
        }
    }else
    {
        printf("Número inválido\n");
    }
    return 0;
}