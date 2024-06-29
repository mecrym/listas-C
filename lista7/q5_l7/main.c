#include <stdio.h>
#include <stdlib.h>
//soma de n ate 0

int soma(int n){
    if(n==1){
        return 1;
    }else{
        return n+soma(n-1);
    }
}

int main()
{
    int n;

    printf("digite valor n: ");
    scanf("%d", &n);

    printf("resultado: %d", soma(n));
    return 0;
}
