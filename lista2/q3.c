#include <stdio.h>
#include <stdlib.h>

int main(){
	float temp, s, l, g;
	printf("digite a temperatura: \n");
	scanf("%f", &temp);
	
	if(temp<80){
		printf("solido");
	}else if(temp>80 && temp<200){
		printf("liquido");
	}else if(temp>210){
		printf("vapor");
	}else if(temp=80){
		printf("solido e liquido");
	}else if(temp>=200 && temp<=210){
		printf("liquido e vapor");
	}
	return 0;
}