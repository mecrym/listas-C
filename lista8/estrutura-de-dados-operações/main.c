#include <stdio.h>
//struct para armazenar numero de pe�as vendidas e seu pre�o, soma pre�o e n de pe�as
//video aula do youtube

struct dados{
    int pecas;
    float preco;
};

typedef struct dados venda;

int main()
{
    venda A={20, 110.0};
    venda B={3, 258.0};
    venda total;

    //soma
    total.pecas=A.pecas+B.pecas;
    total.preco=A.preco+B.preco;

    printf("soma pecas: %d\n", total.pecas);
    printf("soma precos: %.2f", total.preco);

    return 0;
}
