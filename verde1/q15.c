#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, next;

    printf("Digite o termo n da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Os %d primeiros termos da sequencia de Fibonacci sao:\n", n);

    int i = 1;
    while (i < n) {
        if (i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
        i++;
    }
    printf("\n");

    return 0;
}
