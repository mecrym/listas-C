/*ler uma palavra do teclado;
**- mostrar todas as letras mai�sculas que est�o na palavra digitada.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uperCase(char palavra[50], int tam);

int main(){
    char palavra[50];
    int tam;

    fgets(palavra, 50, stdin);//fgets(nomedastring, tamanho, stdin);

    tam=strlen(palavra);

    uperCase(palavra, tam);

    return 0;
}

void uperCase(char palavra[50], int tam){
    for(int i=0; i<tam; i++){
        if(palavra[i]>='A' && palavra[i]<='Z'){
            printf("%c", palavra[i]);
        }
    }
}
