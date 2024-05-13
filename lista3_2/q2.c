/*Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior,
o menor e a média aritmética desse conjunto de dados. (Flag -1).Execute este programa para os seguintes valores*/
#include <stdio.h>

int main()
{
    int n, maior = 0, menor = 9999999, media, cont = 0, contA = 0;

    printf("Digite um numero inteiro positivo, -1 indica o fim da leitura: ");

    do // executa o codigo pelo menos uma vez e continua até que o usuário digite -1
    {
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor && n > -1)
        {
            menor = n;
        }
        if (menor == maior && menor > -1)
        {
            printf("O maior e o menor numero sao iguais\n");
        }

    } while (n > -1);
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
    media = (maior + menor) / 2;
    printf("A media aritmetica e: %d\n", media);
    return 0;
}