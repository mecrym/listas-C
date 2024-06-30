#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;//(tipo-de-variavel=int, campo=variavel)
    float peso;
    char nome[50];
};
//declarando tipo = "struct tipo_pessoa" de nome = "tipo_pessoa"
typedef struct tipo_pessoa tipo_pessoa;

int main(){
    tipo_pessoa lista[TAM];
    int i;

    for(i=0;i<TAM;i++){
        printf("insira os dados: \n");
        printf("\nidade: ");
        scanf("%d", &lista[i].idade);
        printf("\npeso: ");
        scanf("%f", &lista[i].peso);
        // Limpar o buffer de entrada
        getchar();
        printf("\nnome: ");
        fgets(lista[i].nome, 50, stdin);
        // Remover o caractere de nova linha do final da string
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';
    }
    system("cls");
    printf("\nseus dados: \n");
    for(i=0;i<TAM;i++){
        printf("-------pessoa %d-------", i+1);
        printf("\nidade: %d", lista[i].idade);
        printf("\npeso: %.2f", lista[i].peso);
        printf("\nnome: %s", lista[i].nome);
        printf("\n");
    }
    printf("-----------------------");

    return 0;
}
