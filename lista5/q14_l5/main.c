#include <stdio.h>
#include <stdlib.h>

/*Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver em
uma variável passada por referência a soma dos termos da serie de Fibonacci do primeiro termo até o termo
passado. Exemplo suponha que seja passado o valor 6, então deverá devolver a soma de 1+1+2+3+5+8, ou seja, 20.*/

void fibonacci(int n, int *resultado){
    printf("digite a posicao do termo que deseja: ");
    scanf("%d", &n);

    if(n<=0){
        *resultado=0;
    }else if(n==1){
        *resultado=1;
    }else{
        int primeiro=1;
        int segundo=0;
        int proximo=1;

        *resultado=0;

        for(int i=0; i<n; i++){


            proximo=primeiro+segundo;
            *resultado+=proximo;// *resultado=*resultado+proximo;
            /*segundo=proximo;
            primeiro=segundo;  a ordem importa, inverter essas duas linhas resolve o problema ;3 */
            primeiro=segundo;
            segundo=proximo;

            printf("%d ", proximo);
        }
        printf("\n termo desejado: %d", proximo);
        printf("\n soma da sequencia ate o termo n: %d", *resultado);
    }

}
int main()
{
    int n=0;
    int resultado;

    fibonacci(n, &resultado);
    printf("\n");
    return 0;
}
