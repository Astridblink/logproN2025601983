#include <stdio.h>

int main()

{
    const float COVER=500, DESC=0.25;
    float total;
    int numMuj,numHom;
    printf("Dame el numero de mujeres:");
    scanf("%d",&numMuj);
    printf("Dame el numero de hombres:");
    scanf("%d",&numHom);
    total=numHom*COVER+numMuj*COVER-numMuj*COVER*DESC;
    printf("El total es:%f",total);

return 0;

}
