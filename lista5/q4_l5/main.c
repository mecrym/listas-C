#include <stdio.h>
#include <stdlib.h>

/*Crie um procedimento para:

- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres.*/

void contador(char digitos[200], int cont);

int main()
{
    char digitos [200];
    int cont=0;

    fgets(digitos, 200, stdin);
    contador(digitos, cont);

    return 0;
}

void contador(char digitos[200], int cont){
    int tam = strlen(digitos);
    for(int i=0; i<tam; i++){
        cont++;
    }
    printf("quantidade: %d digitos: %s\n", cont, digitos);
}
