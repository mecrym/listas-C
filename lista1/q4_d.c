//inverter ordem de um numero de CDU para UDC

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> //para aparecer acento

int main()
{
	setlocale(LC_ALL, "pt_BR");

	int c, d, u, ne, ns;
	printf("digite o numero de tres digitos que deseja converter:\n");
	scanf("%d", &ne);
	c = ne / 100;
	d = (ne % 100) / 10;
	u = (ne % 100) % 10;

	ns = (u * 100) + (d * 10) + (c);

	printf("numero invertido: %d\n", ns);

	return 0;
}
