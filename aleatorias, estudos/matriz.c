#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void diagonalPrincipal(int i, int j, int matriz[i][j]);
void abaixoDiagonalPrincipal(int i, int j, int matriz[i][j]);
int main(){
    int i=0, j=0;
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &i);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &j);

    int matriz[i][j];//cria a matriz SEMPRE DEPOIS de receber os valores de i e j, DEPOIS!!!!!!!!!!!


    for(int a=0; a<i; a++){
        for(int b=0; b<j; b++){
            printf("Digite o valor da linha %d e coluna %d: ", a+1, b+1);
            scanf("%d", &matriz[a][b]);
        }
    }
    for(int a=0; a<i; a++){
        for(int b=0; b<j; b++){
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
    }

    printf("\n Diagonal principal: \n");
    diagonalPrincipal(i, j, matriz);
    printf("\n");
    printf("abaixo da diagonal principal: \n");
    abaixoDiagonalPrincipal(i, j, matriz);
    printf("\n");
    printf("acima da diagonal principal: \n");
    acimaDiagonalPrincipal(i, j, matriz);


    return 0;
}

void diagonalPrincipal(int i, int j, int matriz[i][j]){
    for(int a=0; a<i; a++){
        for(int b=0; b<j; b++){
            if(a==b){
                printf("%d ", matriz[a][b]);
            }
        }
        printf("\n");
    }
}

void abaixoDiagonalPrincipal(int i, int j, int matriz[i][j]){
    for(int a=0; a<i; a++){
        for(int b=0; b<j; b++){
            if(a>b){
                printf("%d ", matriz[a][b]);
            }
        }
        printf("\n");
    }
}

void acimaDiagonalPrincipal(int i, int j, int matriz[i][j]){
    for(int a=0; a<i; a++){
        for(int b=0; b<j; b++){
            if(a<b){
                printf("%d ", matriz[a][b]);
            }
        }
        printf("\n");
    }
}
