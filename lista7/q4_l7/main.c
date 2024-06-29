#include <stdio.h>
#include <stdlib.h>

//potencia x^n

int potencia(int x, int n){
    if(n==0){
        return 1;
    }else{
        return x*potencia(x, n-1);
    }
}

int main()
{
    int x, n;

    printf("digite valor de x e n: ");
    scanf("%d %d", &x, &n);

    printf("resultado: %d", potencia(x, n));
    return 0;
}
