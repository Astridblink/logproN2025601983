#include <stdio.h>
#include <math.h>
#define M_PI 3.141592653589793

int main()
{
    int L = 7;

    float c1 = pow(L, 2);
    float c2 = (1/5.0*L)*(3/5.0*L);
    float c3 = (1/5.0*L)*(1/5.0*L);

    float at = c1+2*c2+2*c3+M_PI*pow(L/2.0,2)/2;
    float pt = (23.0/5)*L+(M_PI*L/2);

    printf("El valor del area de la figura es: %.4f\n", at);
    printf("El valor del perimetro de la figura es: %.4f\n", pt);

    return 0;
}

