#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e
// quantos não são nem números nem letras.
int main()
{
    char palavra[51]; // 50 caracteres mais o nulo
    int letras = 0, numeros = 0, caracteres = 0;

    fgets(palavra, sizeof(palavra), stdin);//acostumar com fgets(palavra, sizeof(palavra), stdin)

    for (int i = 0; palavra[i] != '\0' && i < 50; i++) {//condição de parada dedve incluir a diferença do null
        if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z')) {
            letras++;
        } else if (palavra[i] >= '0' && palavra[i] <= '9') {
            numeros++;
        } else if (palavra[i] != '\n') { // Ignorar a nova linha inserida pelo fgets
            caracteres++;
        }
    }

    printf("A string digitada possui %d letras\n", letras);
    printf("A string digitada possui %d números\n", numeros);
    printf("A string digitada possui %d caracteres que não são nem letras nem números\n", caracteres);

    return 0;
}
