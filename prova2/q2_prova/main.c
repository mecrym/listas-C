#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    s=(2/2^2)-(4/4^2)+(6/6^2)-...+-n
*/

void calculo (int n){
    int a=2;
    float s;
    float primeiro=0;
    float resultado=0;

    for (int i=1; i<=n; i++){
        if(i%2!=0){
            s=(a/pow(a,2));
        }else if(i%2==0) {
            s=(-a/pow(a,2));
        }
        resultado=resultado+s;
        a=a+2;
    }
    printf("resultado: %.2f", resultado);
}
int main()
{
    int n;
    printf("digite o numero de termos: ");
    scanf("%d", &n);

    calculo(n);

    return 0;
}
