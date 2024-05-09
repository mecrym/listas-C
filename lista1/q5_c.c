#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float C, F;

	printf("digite o valor da temperatura em celsius a ser convertida:");
	scanf("%f", &C);
	F = (1.8 * C) + 32;
	/*printf("a temperatura em celsius a ser convertida é igual a: %.2f", &F);
		Ao usar &F como argumento para a função printf, você está passando o endereço de
		memória de F, em vez do valor armazenado nessa variavel.*/
	printf("A temperatura em Fahrenheit e igual a: %.2f\n", F);
	return 0;
}
