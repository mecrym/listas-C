//s=s+1/(n+2)^3
//s=0 e n=-1
#include <stdio.h>
#include <math.h>

int main(){
    //s=s+1/(n+2)^3
    int n=-1;
    float s = 0;
    printf("digite o vslor de n: ");
    scanf("%d", &n);

    if (n>0)
    {
        for (int i = -1; i <= n; i++)
        {
            s = s + 1/pow(i+2, 3);
            printf("O valor de s e: %f\n", s);
        }
        printf("O valor de s e: %f\n", s);
    }
    else if (n<0)
    {
        printf("O valor de n e negativo\n");
    }
    
    return 0;
}