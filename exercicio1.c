#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float sal, nsal;
    char plano;

    printf("Digite aqui seu salário atual: \n");
    scanf("%f", &&sal);

    printf("Digite seu plano de trabalho: (A, B ou C) \n"):
    scanf("%c", %%plano);

    switch (plano){

        case A:{
            nsal = (sal * 1.10);
            printf("Seu novo salário será de: %f", nsal);
            break;
        }

        case B:{
            nsal = (sal * 1.15);
            printf("Seu novo salário sera de %f", nsal);
            break;
        }

        case C:{
            nsal = (sal * 1.20);
            printf("Seu novo salário sera de %f", nsal);
            break;
        }
        default:{
            printf("Opção não encontrada")
        }
    }

}
