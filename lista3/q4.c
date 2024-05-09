#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for(int i = num; i > 0; i--){
        fatorial *= i;
        }
    
    printf("O fatorial de %d! =  %d\n", num, fatorial);

    return 0;
}