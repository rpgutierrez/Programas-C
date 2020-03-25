#include <stdio.h>
#include <stdlib.h>
int main(){
    float alt, pes, imc;

    printf("Digite sua altura: \n");
    scanf("%f", &alt);
    printf("Digite seu peso: \n");
    scanf("%f", &pes);

    imc = pes / (alt * alt);

    if( imc >= 0 && imc < 18.5){
        printf("ABAIXO DO PESO");
    }else if(imc >= 18.5 && imc < 25){
        printf("NORMAL");
    }else if(imc >= 25 && imc < 30){
        printf("PRE-OBESO");
    }else if(imc >= 30 && imc < 35){
        printf("OBESO CLASSE I");
    }else if(imc >= 35 && imc < 40){
        printf("OBESO CLASSE II");
    }else if(imc >= 40){
        printf("OBESO CLASSE III");
    }

}
