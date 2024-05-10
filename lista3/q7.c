#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Protótipos das funções
void questao1();
void questao2();
void questao3();
void questao4();
void questao5();
void questao6();

int main() {
    int escolha;

    // Exibição do menu
    printf("Escolha uma opcao de questao para executar:\n");
    printf("1. questao 1\n");
    printf("2. questao 2\n");
    printf("3. questao 3\n");
    printf("4. questao 4\n");
    printf("5. questao 5\n");
    printf("6. questao 6\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &escolha);

    // Chamada da função correspondente à escolha do usuário
    switch (escolha) {
        case 1:
        questao1();
            break;
        case 2:
        questao2();
            break;
        case 3:
        questao3();
            break;
        case 4:
        questao4();
            break;
        case 5:
        questao5();
            break;
        case 6:
        questao6();
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

// Implementação das funções
void questao1() {
    printf("Voce escolheu o questao 1.\n");
    printf("Escrever a sequencia de 1 até 10");
    
    int numero;
    for (numero=1; numero<11; numero++){
        printf("%d\n", numero);
    }
}

void questao2() {
    printf("Voce escolheu o questao 2.\n");
    printf("Escrever a sequencia de 10 até 1");
    
    int numero;
    for (numero=10; numero>0; numero--){
        printf("%d\n", numero);
    }
}

void questao3() {
    printf("Voce escolheu o questao 3.\n");
    printf("Leia um número e imprima os números impares de 1 até esse número.");

    int n;
    int i;
    //int impar;
    printf("Digite um numero: ");

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
}

void questao4() {
    printf("Voce escolheu o questao 4.\n");
    printf("Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado.");

    int num, fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for(int i = num; i > 0; i--){
        fatorial *= i;
        }
    
    printf("O fatorial de %d! =  %d\n", num, fatorial);
}

void questao5() {
    printf("Voce escolheu o questao 5.\n");
    printf("A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... .Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série de 1 até este enésimo termo.");

    int num, primeiro = 0 , segundo = 1, proximo=1;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num>2)
    {
        for (int i = 0; i < num; i++)
        {
            printf("%d ", proximo);
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
    }else
    {
        printf("Número inválido\n");
    }
}

void questao6() {
    printf("Voce escolheu o questao 6.\n");
    printf("\nO numero 3025 possui a seguinte caracteristica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais sao os numeros de 4 digitos possuem essa caracteristica?\n\n");

    int numero=1000, primeiro, soma, segundo, cont=0;
        double quadrado;
        for (int i=0; i<10000; i++)
        {
            while (numero>999 && numero<10000)
            {
                primeiro=numero/100;
                segundo=numero%100;
                soma=primeiro+segundo;
                quadrado=pow(soma, 2);
                //printf("Numero: %d, Primeiro: %d, Segundo: %d, Soma: %d, Quadrado: %.0f\n", numero, primeiro, segundo, soma, quadrado);  // Debugging line

                if(quadrado==numero){
                    printf("%d\n", numero);
                    cont++;
                }
                numero++;
            }
            
        }
        
        printf("Quantidade de numeros: %d\n", cont);
}
