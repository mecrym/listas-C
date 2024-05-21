#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*- ler uma palavra do teclado;
**- ler um caractere do teclado
**- transforme toda a palavra em maiúscula;
**contar e mostrar as letras maiúsculas menores que o caractere,
**e quantas letras são maiores que o caractere, e quantas são iguais ao caractere lido*/

int main(){
    char palavra[100], c;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    procedimentos();

}

void procedimentos(){
    int tam, i, menor = 9999, maior = 0;
    
    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            palavra[i] = palavra[i] - 32;
        }
    }
}