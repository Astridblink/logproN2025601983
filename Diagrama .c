#include <stdio.h>

    int main()

{
    const float PAQ=12.0,PAGA=0.5,P_ISR=0.1;

    float salarioB,isr,salarioN;
    int numpaq;
    float totalC;

     printf("Cuantos paquetes hiciste");
     scanf ("%d",&numpaq);

    salarioB=numpaq*PAGA;
    isr=salarioB*P_ISR;
    totalC=numpaq*PAQ;

     printf("Salario bruto:%f\n",salarioB);
     printf("isr:%f\n",isr);
     printf("total:%f\n",totalC);

    return 0;
}
