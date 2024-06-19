#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre a e Z - confira se o caracter esta nesse intervalo),
// mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.
int main()
{
    char palavra[50];
    char caractere;
    int cont=0, aux=0;

    gets(palavra);
    scanf("%c", &caractere);

    if (caractere>='a' && caractere<='z'){
        for(int i=0; i<50; i++){
            cont++;
            if(palavra[i]==caractere){
                printf("caractere se enconta na posicao %d\n", cont);
                aux++;
            }
        }
        printf("caractere aparece %d vezes\n", aux);
    }else{
        printf("caractere invalido\n");
    }

    printf("\n");
    return 0;
}
