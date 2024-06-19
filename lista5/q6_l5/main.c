#include <stdio.h>

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

    do {
        printf("Digite um valor inteiro (-1 para terminar): ");
        scanf("%d", &a);

        if (a != -1 && a >= x && a <= y && a % 2 == 0 && a % 3 == 0) {
            printf("O valor %d é múltiplo de 2 e 3 e pertence ao intervalo.\n", a);
        }
    } while (a != -1);
}
