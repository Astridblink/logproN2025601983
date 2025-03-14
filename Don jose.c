#include <stdio.h>

    int main()

{
    const float MetrosC=9256.00, IVA=0.16;
    int L=12, Area;
    float DineroMC,IVA_M, TotalCI;

    printf("Cual es el area del terreno");
    scanf("%d",&Area);
    DineroMC=MetrosC*Area;
    IVA_M=DineroMC*IVA;
    TotalCI=DineroMC+IVA_M;

    printf("El costo total del terreno es:%.2f\n",DineroMC);
    printf("El costo del IVA del terreno es:%.2f\n",IVA_M);
    printf("El costo total con IVA es:%.2f\n",TotalCI);

    return 0;
}
