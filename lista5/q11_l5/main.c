#include <stdio.h>
#include <stdlib.h>
/*Crie um procedimento para:

- ler uma linha do teclado; defina essa linha como global ;
- separar em outra cadeia de caracteres e mostrar todos os s�mbolos n�o alfanum�ricos (letras ou d�gitos) na cadeia de caracteres.*/

char linha[300];
char simbolos[300];

void lerLinha(char *linha){//coloca tipo nome_fun��o(tipo *nome_variavel)
    int tamanho;
    printf("digite a linha que deseja analizar: ");
    fgets(linha, 300, stdin);
}

void testeSimbolos(char *linha, char*simbolos){
    int j=0;
    int tam=strlen(linha);
    for(int i=0; i<tam; i++){
        if(!((linha[i]>='a' && linha[i]<='z')||(linha[i]>='A'&&linha[i]<='Z')||(linha[i]>='0'&&linha[i]<='9'))){
            simbolos[j]=linha[i];
            j++;
        }
    }
    printf("\nlista de simbolos: %s", simbolos);
}
int main()
{
    lerLinha(linha);
    testeSimbolos(linha, simbolos);

    return 0;
}
