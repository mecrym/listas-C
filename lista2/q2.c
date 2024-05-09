#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main(){
	//string nome;
	char nome[50];
	float n1, n2, n3, media;
	
	printf("digite seu nome:\n");
	//scanf("%s", &nome);
	scanf("%[^\n]", &nome);
	printf("digite as suas notas\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media=(n1+n2+n3)/3;
	
	printf("nome: %s\n", nome);
	printf("media: %.2f\n", media);
	if(media>=6){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	return 0;
}