#include <stdio.h>
#include <math.h>


int main ()
{
    int L=2;

    float pt=sqrt(13)+2*(sqrt(8))+10;
    float at=2*L+2*(L*L/2)+((3.0/2*L)*2)/2.0+(2*L)*(1.0/4*2);

    printf("El area total es de: %.2f\n",at);
    printf("El perimetro total es de: %.2f\n",pt);

    return 0;
}
