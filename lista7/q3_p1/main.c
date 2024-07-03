#include <stdio.h>
#include <stdlib.h>

struct dados {
    int codigo;
    int idade;
    char sexo;
    float salario;
};
typedef struct dados Dados;

int main()
{
    float media = 0, maiorSalario = 0.0f, menorSalario = 999999999.0f;
    int somaIdades = 0, contF = 0, contM = 0, homensMenos30 = 0;
    Dados dados;

    printf("Digite o c�digo (digite um n�mero negativo para sair): ");
    scanf("%i", &dados.codigo);

    while (dados.codigo > 0) {
        printf("Digite a idade: ");
        scanf("%i", &dados.idade);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &dados.sexo); // Espa�o antes de %c para ignorar \n
        printf("Digite o sal�rio: ");
        scanf("%f", &dados.salario);

        if (dados.sexo == 'F') {
            somaIdades += dados.idade;
            contF++;
        } else if (dados.sexo == 'M') {
            contM++;
            if (dados.idade < 30) {
                homensMenos30++;
            }
        }

        if (dados.salario > maiorSalario) {
            maiorSalario = dados.salario;
        }
        if (dados.salario < menorSalario) {
            menorSalario = dados.salario;
        }

        printf("\nDigite o c�digo (digite um n�mero negativo para sair): ");
        scanf("%i", &dados.codigo);
    }

    if (contF > 0) {
        media = (float)somaIdades / contF;
    }

    printf("\nM�dia de idade das mulheres: %.2f\n", media);
    printf("Maior sal�rio: %.2f\n", maiorSalario);
    printf("Menor sal�rio: %.2f\n", menorSalario);
    printf("N�mero de homens com menos de 30 anos: %d\n", homensMenos30);

    return 0;
}
