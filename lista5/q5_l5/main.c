#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie um procedimento para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar tudo o que não for dígito e também não for letra minúscula.*/

void contador(char cadeia[200]);

int main() {
    char cadeia[200];

    contador(cadeia);
    return 0;
}

void contador(char cadeia[200]){
    int aux = 0, cont = 0;

    fgets(cadeia, 200, stdin);

    int tam = strlen(cadeia);

    for (int i = 0; i < tam; i++) {
        if (!(cadeia[i] >= 'a' && cadeia[i] <= 'z') && !(cadeia[i] >= '0' && cadeia[i] <= '9') && (cadeia[i]!=' ') && (cadeia[i] != '\0')) {//ao colocar o ! vc verifica se a expressão na vdd corresponde ao contrario, então verifica se está fora dsse intervalo
            aux++;
            printf("nao e digito nem letra minuscula: %c\n", cadeia[i]);

        } else {
            cont++;
        }
    }

    printf("\nquantidade: %d\n", aux);
}
