//media aritmetica

#include <stdio.h>  //padr�o para entrada e saida de dados
#include <stdlib.h> //biblioteca padr�o
#include <math.h>   //contas matem�ticas

int main()
{
    int v1, v2, v3, v4;
    float media;

    printf("digite os quatro valores que serao utilizados para calcular a media: \n");
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);
    media = (v1 + v2 + v3 + v4) / 4;
    printf("media=%.2f\n", media);

    return 0;
}
