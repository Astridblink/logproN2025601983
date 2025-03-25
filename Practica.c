#include <stdio.h>

    int main()
{
    const float m2=11793,ISAI=0.043,IVA=0.16;
    int L=7;

    float Area,isai,iva,Area2,totalc;
    Area=(L*(1.0/4*L))/2+(L*(1.0/2*L))/2+2*(L*1.0/2*L);
    Area2=m2*Area;
    isai=(Area2*ISAI+Area2);
    iva=(Area2*IVA+Area2);
    totalc=(isai+iva);

    printf("El area del terreno es:%.3f\n",Area);
    printf("El costo del terreno es de:%.3f\n",Area2);
    printf("El isai es:%.3f\n",isai);
    printf("El iva es:%.3f\n",iva);
    printf("El precio total del terreno es de:%.3f\n",totalc);
}
