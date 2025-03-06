#include <stdio.h>
#include <math.h>
#define ML_PI 3.141592653589793

int main()

{
    int L=7;

    float at=2*(3*L*L)+2*(3*L*L)/2.0+M_PI*pow(3*L/2.0,2)/2;
    float pt=(M_PI*21.0/2)+2*sqrt(490)+7*L;

    printf("El valor total del area es de:%.4f\n",at);
    printf("El valor total del perimetro es de:%.2f\n",pt);

    return 0;
}
