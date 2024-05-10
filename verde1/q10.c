/*#include <stdio.h>
#include <stdlib.h>

int main()
{   int total=1, tamanho, positivos=0, negativos=0, zeros=0, num;
    scanf("%d", &tamanho);
    while (total<tamanho){
        scanf("%d", &num);

    if(num>0){
        positivos++;

    }else if(num<0){
        negativos++;

    }else if(num==0){
        zeros++;

        }
    }

    printf("%d POSITIVOS", positivos);
    printf("%d NEGATIVOS", negativos);
    printf("%d ZEROS", zeros);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int total = 0, tamanho, positivos = 0, negativos = 0, zeros = 0, num;
    scanf("%d", &tamanho);

    while (total < tamanho) {

        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            zeros++;
        }

        total++;
    }

    printf("%d POSITIVOS\n", positivos);
    printf("%d NEGATIVOS\n", negativos);
    printf("%d ZEROS\n", zeros);

    return 0;
}

