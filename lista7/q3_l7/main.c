#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main()
{
    int n;
    printf("digite n: ");
    scanf("%d", &n);

    printf("resultado: %d", fibo(n));

    return 0;
}
