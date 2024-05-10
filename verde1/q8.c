#include <stdio.h>
#include <math.h>

int main()
{   /*80aptos
     *25% nas diarias
     *aumentar taxa de ocupação de 50 para 80%
     *entrada:
        VnormalD
     *saidas:
        VpromocaoD
        Vtotal_80
        Vtotal_50
        diferenca*/
    float VnormalD, VpromocaoD, Vtotal_80, Vtotal_50, diferenca;
    //int q_80, q_50;

    scanf("%f", &VnormalD);

    VpromocaoD= VnormalD-((VnormalD*25)/100);
    //q_80=(80*80)/100;
    Vtotal_80=64*VpromocaoD;
    //q_50=(50*80)/100;
    Vtotal_50=40*VnormalD;
    diferenca=Vtotal_80-Vtotal_50;


    printf("Valor promocional: %.2f\nPromocional com 80%% ocupado: %.2f\nNormal com 50%% ocupado: %.2f\nDiferenca entre os valores: %.2f", VpromocaoD, Vtotal_80, Vtotal_50, diferenca); //para aparecer % colocar %%
    return 0;
}
