#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vMax, vMotorista;
    /*entrada:
     *velocidade máxima permitida em
     *uma avenida
     *velocidade com que o motorista estava
     *dirigindo nela.*/
    scanf("%d %d", &vMax, &vMotorista);
    if(vMax>=vMotorista)
    {
        printf("Motorista respeitou a lei");
    }
    else if(vMax<vMotorista)
        {
            /*50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida
             *(ex: se a velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h);
             */
            if(vMotorista>vMax && vMotorista<=(vMax+10))
            {
                printf("Multa de 50 reais");
                //100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
            }
            else if(vMotorista>vMax && vMotorista>11 &&(vMotorista<=(vMax+30)))
                {
                    printf("Multa de 100 reais");
                    //200 reais, se estiver acima de 30km/h da velocidade permitida
                }
            else if(vMotorista>vMax && vMotorista>30)
            {
                printf("Multa de 200 reais");
                }
        }

    return 0;
}
