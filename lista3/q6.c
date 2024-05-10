/*numero 3025 possui a seguinte característica:
    
    30 + 25 = 55
    
    55^2 = 3025

    Quantos e quais são os números de 4 dígitos possuem essa característica?*/
    #include <stdio.h>
    #include <math.h>

    int main(){
        int numero=1000, primeiro, soma, segundo, cont=0;
        double quadrado;
        for (int i=0; i<10000; i++)
        {
            while (numero>999 && numero<10000)
            {
                primeiro=numero/100;
                segundo=numero%100;
                soma=primeiro+segundo;
                quadrado=pow(soma, 2);
                //printf("Numero: %d, Primeiro: %d, Segundo: %d, Soma: %d, Quadrado: %.0f\n", numero, primeiro, segundo, soma, quadrado);  // Debugging line

                if(quadrado==numero){
                    printf("%d\n", numero);
                    cont++;
                }
                numero++;
            }
            
        }
        
        printf("Quantidade de números: %d\n", cont);
        return 0;
    }