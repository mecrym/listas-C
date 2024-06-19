#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie um procedimento para:

- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.*/

void contador(char caracteres[100]);

int main()
{
    char caracteres[100];

    contador(caracteres);

    return 0;
}

void contador(char caracteres[100]){
    int cont=0, aux=0;
    fgets(caracteres, 100, stdin);

    int tam=strlen(caracteres);
    // Remover o caractere de nova linha, se estiver presente ;3
    if (caracteres[tam - 1] == '\n') {
        caracteres[tam - 1] = '\0';
        tam--;
    }

    for(int i=0; i<tam; i++){
        if((caracteres[i]>='a' && caracteres[i]<='z')||(caracteres[i]>='A' && caracteres[i]<='Z')){
            //forem letras
            //contar e mostrar
            cont++;
            printf("%c ", caracteres[i]);
        }else if(caracteres[i]!='\0'){
            aux++;
            printf("%c ", caracteres[i]);
        }
    }
    printf("\n%d sao letras\n", cont);
    printf("%d nao sao letras\n", aux);
}
