#include <stdio.h>

int main()
{
    float IMC,PESO,ALTURA;

    printf("Cual es tu peso en kg:");
    scanf("%f",&PESO);

    printf("Cual es tu altura en m:");
    scanf("%f",&ALTURA);

    IMC=PESO/(ALTURA*ALTURA);

    if (IMC<=18.4){
        printf("Bajo peso");
    }else if(IMC>=18.5&&IMC<=24.9){
        printf("Normal");
    }else if(IMC>=25.0&&IMC<=29.9){
        printf("Sobrepeso");
    }else if(IMC>=30.0&&IMC<=34.9){
        printf("Obesidad clase 1");
    }else if(IMC>=35.0&&IMC<=39.9){
        printf("Obesidad clase 2");
    }else if(IMC>=40.0){
        printf("Obesidad clase 3");
    }else {
        printf("No esta");
    }
return 0;

}
