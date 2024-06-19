#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ler uma string de no m�ximo 50 caracteres e mostrar quantas letras possui e quantos caracteres s�o n�meros e
// quantos n�o s�o nem n�meros nem letras.
int main()
{
    char palavra[51]; // 50 caracteres mais o nulo
    int letras = 0, numeros = 0, caracteres = 0;

    fgets(palavra, sizeof(palavra), stdin);//acostumar com fgets(palavra, sizeof(palavra), stdin)

    for (int i = 0; palavra[i] != '\0' && i < 50; i++) {//condi��o de parada dedve incluir a diferen�a do null
        if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z')) {
            letras++;
        } else if (palavra[i] >= '0' && palavra[i] <= '9') {
            numeros++;
        } else if (palavra[i] != '\n') { // Ignorar a nova linha inserida pelo fgets
            caracteres++;
        }
    }

    printf("A string digitada possui %d letras\n", letras);
    printf("A string digitada possui %d n�meros\n", numeros);
    printf("A string digitada possui %d caracteres que n�o s�o nem letras nem n�meros\n", caracteres);

    return 0;
}
