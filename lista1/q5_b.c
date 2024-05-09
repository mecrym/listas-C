//media ponderada
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{//variavel
float n1, n2, n3, mediap;
int p1, p2, p3;
//saida1
printf("digite o valor das tres notas, cada um seguido de seu respectivo peso:\n");
//entrada
scanf("%f %d %f %d %f %d", &n1, &p1, &n2, &p2, &n3, &p3);
//opera��o/comando
mediap=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
//saida
printf("media das suas notas: %.2f", mediap);
//fim
return 0;

}
