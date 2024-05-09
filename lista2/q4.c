#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int x, y;
	scanf("%d", &x);
	
	if(x<0){
		y=pow(x,2)+4;
        printf("%d", y);
	}else if(x>0){
		y=pow(x,3)-3;
        printf("%d", y);
    }else if(x==0){
        printf("erro");
    }

	return 0;

}