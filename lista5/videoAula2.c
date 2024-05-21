#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];

    fgets(nome, 100, stdin);
    nome[0]='X';
    printf("%s", nome);
}