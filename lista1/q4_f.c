//perimetro, area e diagonal de um retangulo

// #include<sdtio.h>/ n estou usando nenhuma fun�� dessa linha
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "pt_BR");
	float b, h, p, a, d;
	printf("digite o valor correspondente a base e a altura:\n");
	scanf("%f %f", &b, &h);

	/*p=2*b+2*a;
	a=b*a;
	d=(b^2+h^2)^0.5;*/
	p = 2 * (b + h);
	a = b * h;
	d = sqrt(b * b + h * h);

	printf("o perimetro: %.2f, a area : %.2f, e a diagonal :%.2f", p, a, d);
}
