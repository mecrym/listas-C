#include <stdio.h>
#include <math.h>
/*ler um código do teclado e mostrar o nome correspondente, de acordo com a lista :
    
    221 Bernardo
    
    211 Eustáquio
    
    311 Luiz
    
    312 Mário
    
    332 Artur*/

int main(){
    int lista;
    printf("Digite uma posição da lista: ");
    scanf("%d", &lista);
    switch (lista)
    {
    case 221:
        printf("Bernardo\n");
        break;
    case 211:
        printf("Eustáquio\n");
        break;
    case 311:
        printf("Luiz\n");
        break;
    case 312:
        printf("Mário\n");
        break;
    case 332:
        printf("Artur\n");
        break;
    
    default:
        break;
    }
}