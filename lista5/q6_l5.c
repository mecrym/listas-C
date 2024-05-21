#include <stdio.h>
#include <stdlib.h>

void procedimentos(int x, int y);

int main() {
    int x, y;
    printf("Digite dois valores inteiros positivos: ");
    scanf("%d %d", &x, &y);
    procedimentos(x, y);
    return 0;
}

void procedimentos(int x, int y) {
    int a;

    for(int i = 0;a != -1; i++) {
        printf("Digite um valor inteiro (-1 para terminar): ");
        scanf("%d", &a);

        if (a != -1 && a >= x && a <= y && a % 2 == 0 && a % 3 == 0) {
            printf("O valor %d e multiplo de 2 e 3 e pertence ao intervalo.\n", a);
        }else if(a==-1){
            printf("Fim do programa.\n");
        }else{
            printf("O valor %d NAO e multiplo de 2 e 3 ou nao pertence ao intervalo.\n", a);
        }
    }
}
