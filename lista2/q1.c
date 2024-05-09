#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	int n;
	printf("digite o numero que deseja verificar: \n");
	scanf("%d", &n);
	if(n%2==0){
		printf("par");
	}
	else{
		printf("impar");
	}
	return 0;
}
