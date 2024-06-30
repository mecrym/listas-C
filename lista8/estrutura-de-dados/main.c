#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;//(tipo-de-variavel=int, campo=variavel)
    float peso;
    char nome[TAM];
};
//declarando tipo = "struct tipo_pessoa" de nome = "tipo_pessoa"
typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    //criando e inicializando uma variavel:
    tipo_pessoa pes= {0, 0.0, "teste"};

    printf("inicio:\n");

    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //atribuindo valores aos campos. (variavel.campo);
    pes.idade=10;
    pes.peso=99.99;
    strcpy(pes.nome, "texto");//strcpy(variavel, "palavra");

    printf("\nalterando os campos via codigo: \n");

    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //solicitando inserções via teclado:
    printf("\ninsira um numero inteiro: \n");
    scanf("%d", &pes.idade);
    printf("insira um numero real: \n");
    scanf("%f", &pes.peso);
    printf("insira uma palavra: \n");
    scanf("%s\n", &pes.nome);

    printf("\nalterando os dados com o input do usuario: \n");

    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}
