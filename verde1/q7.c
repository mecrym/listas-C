#include <stdio.h>
#include <stdlib.h>

int main()
{   /*tabela:
     *Faixa das notas - Mensagem

        Nota > = 8 e Nota < = 10 - Otimo

        Nota > = 7 e Nota < 8 - Bom

        Nota > = 5 e Nota < 7 - Regular

        Nota < 5 - Insatisfatorio*/
        float nota;
        scanf("%f", &nota);
        if((nota >= 8) && (nota <= 10)){
            printf("Otimo");
        }else if((nota >= 7) && (nota < 8)){
            printf("Bom");
        }else if((nota >= 5) && (nota < 7)){
            printf("Regular");
        }else if(nota < 5){
            printf("Insatisfatorio");
        }

    return 0;
}
