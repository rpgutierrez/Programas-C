#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    float sal, nsal;
    char plano, A, B, C;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite aqui seu salário atual: \n");
    scanf("%f", &sal);

    printf("Digite seu plano de trabalho: (A, B ou C) \n");
    scanf(" %c", &plano);

    printf("%f %c \n", sal, plano);

    switch(plano){

        case 'A':{
            nsal = (sal * 1.10);
            printf("Seu novo salário será de: %.2f \n", nsal);
            break;
        }

        case 'B':{
            nsal = (sal * 1.15);
            printf("Seu novo salário sera de %.2f \n", nsal);
            break;
        }

        case 'C':{
            nsal = (sal * 1.20);
            printf("Seu novo salário sera de %.2f \n", nsal);
            break;
        }
        default:{
            printf("Opção não encontrada \n");
            break;
        }
    }
    system("pause");

}
