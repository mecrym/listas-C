#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, kw_gasto, valor_por_kw, total, desconto;

    scanf("%f", &salario);
    scanf("%f", &kw_gasto);

    //o valor em reais de cada kilowatt
    valor_por_kw=salario/700;
    //o valor em reais a ser pago
    total=valor_por_kw*kw_gasto;
    //desconto de 10%.
    desconto=total-(total*0.1);

    printf("valor do kW: %.2f\nValor a pagar: %.2f\nValor com desconto: %.2f", valor_por_kw, total, desconto);
    return 0;
}
