/*Desenvolver um programa que leia o número de alunos em uma turma.
Em seguida:
a) criar uma função que devolva um vetor com os nomes dos alunos.
b) uma função que devolva uma matriz contendo quatro notas por aluno – notas do tipo inteiro.
c) uma função que receba a matriz de notas e devolva um vetor do tipo real contendo a média de cada aluno.
d) uma função que devolva um vetor com a classificação em ordem alfabética dos alunos da turma.
e) uma função que receba os vetores e matrizes criados e imprima os alunos em ordem alfabética , bem como suas médias*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nomeAlunos(int n, char nomes[n][50]); // Modify the function declaration to match the correct parameter types.
void notasAlunos(int n, int notas[n][4]); // Modify the function declaration to match the correct parameter types.
void mediaAlunos(int n, int notas[n][4], float media[n], char nomes[n][50]); // Modify the function declaration to match the correct parameter types.

int main(){
    int n;
    
    printf("Digite o numero de alunos na turma: ");
    scanf("%d", &n);

    char nomes[n][50];
    int notas[n][4];
    float media[n];

    nomeAlunos(n, nomes); // Modify the function call to pass the correct number of arguments.
    notasAlunos(n, notas); // Modify the function call to pass the correct
    mediaAlunos(n, notas, media, nomes); // Modify the function call to pass the correct
}

void nomeAlunos(int n, char nomes[n][50]){ // Modify the function definition to match the correct parameter types.
    // Function implementation goes here.
    int i;
    for(i=0; i<n; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", &nomes[i]);//pq nomes [i] e n [n]?? pq n é o tamanho do vetor e i é o indice 
    }
    for(i=0; i<n; i++){
        printf("%s\n", &nomes[i]);
    }
    
}
//uma função que devolva uma matriz contendo quatro notas por aluno – notas do tipo inteiro.
void notasAlunos(int n, int notas[n][4]){
    int i, j;//contadores
    for(i=0; i<n; i++){//para cada aluno
        for(j=0; j<4; j++){//para cada nota
            printf("Digite a nota %d do aluno %d: ", j+1, i+1);//solicita a nota
            scanf("%d", &notas[i][j]);
        }
        printf("\n");//pula linha
    }
    for(i=0; i<n; i++){//para cada aluno
        for(j=0; j<4; j++){//para cada nota
            printf("%d ", notas[i][j]);//imprime a nota
        }
        printf("\n");//pula linha
    }
}
//uma função que receba a matriz de notas e devolva um vetor do tipo real contendo a média de cada aluno.
void mediaAlunos (int n, int notas[n][4], float media[n], char nomes[n][50]){//nomes[n][50] tras os dados armazenados na função nomeAlunos para a função mediaAlunos e com isso imprime o nome do aluno junto com a media por causa do &nomes[i]
    int i, j;//contadores
    for(i=0; i<n; i++){//para cada aluno
        media[i]=0;//inicializa a media
        for(j=0; j<4; j++){//para cada nota
            media[i]=media[i]+notas[i][j];//soma as notas
        }
        media[i]/=4;//divide a soma das notas por 4
    }
    for(i=0; i<n; i++){//para cada aluno
        printf("A media do aluno %s e: %2.f\n", &nomes[i], media[i]);//imprime a media
    }
}
//uma função que devolva um vetor com a classificação em ordem alfabética dos alunos da turma.
void classificacaoAlunos(int n, char nomes [n][50]){
    
}