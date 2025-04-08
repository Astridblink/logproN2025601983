#include <stdio.h>

int main(){

int opc;

    printf("Selecciona un idioma de los siguientes:");
    printf("\n Español\n Ingles\n Japones\n");
    printf("Ingrese su eleccion:");
    scanf("%d",&opc);

     if (opc==1){
        printf("Hola!!");
     }else if(opc==2){
        printf("Hello!!");
     }else if(opc==3){
        printf("Inserta un hola en japones");
     }else{
        printf("No esta");
     }
     return 0;
}
