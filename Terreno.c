#include <stdio.h>

    int main()

{
    const float MetrosC=9256.00, IVA=0.16;
    int L=12;
    float Area,DineroMC,IVA_M, TotalCI;

    Area=(12*1/2.0*L)+((1/2.0*L*12)/2);
    DineroMC=MetrosC*Area;
    IVA_M=DineroMC*IVA;
    TotalCI=DineroMC+IVA_M;

    printf("El area total del terreno es:%.2f\n",Area);
    printf("El costo total del terreno es:%.2f\n",DineroMC);
    printf("El costo del IVA del terreno es:%.2f\n",IVA_M);
    printf("El costo total con IVA es:%.2f\n",TotalCI);

    return 0;
}
