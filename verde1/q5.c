#include <stdio.h>
#include <stdlib.h>

int main()
{   int q, a1, a5;
    scanf("%d %d", &q, &a1);
    //an=a1*pow(q, (n-1));
    //q é a razão
    a5=a1*pow(q, 4);

    printf("%d", a5);
    return 0;
}
