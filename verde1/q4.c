#include <stdio.h>
#include <stdlib.h>

int main()
{   int r, a1, pa, a10;
    //an=a1+(n-1)*r
    //n=10
    scanf("%d %d", &r, &a1);
    a10=a1+(9*r);
    printf("%d", a10);
    return 0;
}
