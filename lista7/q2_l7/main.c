#include <stdio.h>
#include <stdlib.h>
//fatorial

int fat(int n){
    if (n==0 || n==1){
        return 1;
    }else{
        return n * fat(n-1);
    }
}
int main()
{
    int n;

    printf("digite n: ");
    scanf("%d", &n);

    printf("resultado: %d", fat(n));

    return 0;
}
