#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d3_9=0, d2=0, d5=0, n, divisivel;//0 falso e 1 verdadeiro

    for(int cont=1;cont<=10;cont++){//da pra colocar cont=0 e cont<10
        scanf("%d", &n);
        divisivel=0;
        if(n%3==0 && n%9==0){
            d3_9++;
            divisivel=1;
        }
        if(n%2==0){
            d2++;
            divisivel=1;
        }
        if(n%5==0){
            d5++;
            divisivel=1;
        }
        if(divisivel==0){
            printf("Numero nao divisivel pelos valores\n");
        }
    }
    printf("%d Numeros sao divisiveis por 3 e por 9\n", d3_9);
    printf("%d Numeros sao divisiveis por 2\n", d2);
    printf("%d Numeros sao divisiveis por 5\n", d5);

    return 0;
}

