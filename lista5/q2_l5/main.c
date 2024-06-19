#include <stdio.h>
#include <stdlib.h>

/*Crie um procedimento para:

- ler uma palavra do teclado;
- ler um caractere do teclado
- transforme toda a palavra em maiúscula;
- contar e mostrar as letras maiúsculas menores que o caractere, e quantas letras são maiores que o caractere,
  e quantas são iguais ao caractere lido*/

//strupr(); -> como usar:  strupr(nome-da-string);

void tamanho(int tam, char caractere, char palavra[50]);
void uperCase (char palavra[50]);

int main()
{
    char palavra[50];
    char caractere;
    int tam=0;

    fgets(palavra, 50, stdin);
    scanf("%c", &caractere);

    tamanho(tam, caractere, palavra);
    uperCase(palavra);

    return 0;
}

void tamanho(int tam, char caractere, char palavra[50])
{
    tam=strlen(palavra);
    int a=0, b=0, c=0;
    for(int i=0; i<tam; i++)
    {
        if(palavra[i]<caractere)
        {
            a++;
        }
        else if(palavra[i]>caractere)
        {
            b++;
        }
        else if(palavra[i]==caractere)
        {
            c++;
        }
    }
    printf("menores que o caractere: %d\n", a);
    printf("maiores que o caractere: %d\n", b);
    printf("iguais ao caractere: %d\n", c);
}

void uperCase (char palavra[50])
{
    strupr(palavra);
    printf("\n%s\n", palavra);
}
