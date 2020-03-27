#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número entre 0 e 10: \n");
    scanf("%d", &num);

    switch(num){

        case 1:{
            printf("UM \n");
            break;
        }
        case 2:{
            printf("DOIS \n");
            break;
        }
        case 3:{
            printf("TRÊS \n");
            break;
        }
        case 4:{
            printf("QUATRO \n");
            break;
        }
        case 5:{
            printf("CINCO \n");
            break;
        }
        case 6:{
            printf("SEIS \n");
            break;
        }
        case 7:{
            printf("SETE \n");
            break;
        }
        case 8:{
            printf("OITO \n");
            break;
        }
        case 9:{
            printf("NOVE \n");
            break;
        }
        default: {
            printf("Número inválido \n");

        }

    }
    system("pause");

}
