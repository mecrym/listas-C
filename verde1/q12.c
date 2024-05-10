#include <stdio.h>
#include <math.h>

int main(){
    int num, den, n, fat;
    float f, e;

    scanf("%d",&n);num=1; den=0; e=0;
    for (int i=1;i<=n;i++){
        fat=1;
        for(int cont=1; cont<=den;cont++){
            fat=fat*cont;
        }
        f=num/(float)fat;
        e=e+f;
        num=1;
        den++;
        }
        printf("%.2f\n", e);

    return 0;
}
