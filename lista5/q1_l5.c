#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*- ler uma palavra do teclado;
**- mostrar todas as letras maiúsculas que estão na palavra digitada.*/
void uperCase(char *palavra, int tam);

int main()
{
    char palavra[100];
    int tam;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin); // safer alternative to gets
    tam = strlen(palavra);
    uperCase(palavra, tam);
    return 0;
}   

void uperCase(char *palavra, int tam){
    int i;
    for(i=0; i<tam; i++){
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            printf("%c", palavra[i]);
        }
    }
}
