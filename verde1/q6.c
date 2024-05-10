#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b;
    float x;
    //ler coeficientes de uma equação
    //ax+b=0; ceficientes: a e b
    //calcular e escrever a raiz da equação
    scanf("%d %d", &a, &b);

    x=-b/a;

    printf("%.2f", x);
    return 0;
}
