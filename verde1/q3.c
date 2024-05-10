#include <stdio.h>
#include <math.h>

int main()
{   float p, a, d, base, altura;

    scanf("%f %f", &base, &altura);

    p=base*2+altura*2;
    a=base*altura;
    d=sqrt((pow(altura, 2)+(pow(base, 2))));

    printf("Perimetro: %.2f\nArea: %.2f\nDiagonal: %.2f", p, a, d);
    return 0;
}
