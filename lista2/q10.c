/*Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. 
O custo da água varia dependendo do tipo do consumidor
    
    residencial, comercial ou industrial. 
    
    A regra para calcular a conta e:
    
    Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
    
    Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
    
    Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
    
    O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo 
    de água em metros cubos. Como resultado imprimir o valor a ser pago pelo mesmo.*/
#include <stdio.h>
#include <math.h>

int main(){
    int tipo;
    float conta, consumo;
    printf("Digite o tipo de conta, sendo 1 = residencial, 2 = comercial, 3 = industrial: ");
    scanf("%d", &tipo);
    printf("Digite o consumo de água em metros cúbicos: ");
    scanf("%f", &consumo);
    switch (tipo)
    {
    case 1:
        conta=75+3.5*consumo;
        printf("O valor a ser pago é R$ %.2f\n", conta);
        break;
    case 2:
        if(consumo<=80){
            conta=500;
        }else{
            conta=500+5.5*(consumo-80);
        }
        printf("O valor a ser pago é R$ %.2f\n", conta);
        break;
    case 3:
        if(consumo<=100){
            conta=800;
        }else{
            conta=800+8*(consumo-100);
        }
        printf("O valor a ser pago é R$ %.2f\n", conta);
        break;
    
    default:
        break;
    }
    return 0;
    
}