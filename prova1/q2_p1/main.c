#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//tam min de 20 e max de 25
//começar com letra minuscula
//caractere[9]=simbolo
void regras(char caracteres[30]);

int main()
{
    char caracteres[30];//pq tenho q verificar se tem 25, n posso colocar logo 26

    printf("digite uma cadeia de caracteres: \n");
    fgets(caracteres, 30, stdin);

    regras(caracteres);

    return 0;
}

void regras(char caracteres[30]){
    int tam = strlen(caracteres);
    if(tam>19 && tam < 26){
        printf("atende a regra de tamanho e tem no minimo 20 caracteres ou no maximo 25\n");
    }else{
        printf("n atende a regra do tamanho\n");
    }
    if(caracteres[0]>='a' && caracteres[0]<='z'){
        printf("comeca com letra minuscula\n");
    }else{
        printf("n atende a regra da letra minuscula\n");
    }
    if(!((caracteres[9]>='a' && caracteres[9]<='z')||(caracteres[9]>='A' && caracteres[9]<='Z')||(caracteres[9]>='0'&&caracteres[9]<='9'))){
        printf(" o caractere 10 e um simbolo\n");
    }else{
        printf("n atende a regra do simbolo\n");
    }
}
