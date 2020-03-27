#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número entre 1 e 12: \n");
    scanf("%d", &num);

    switch(num){

        case 1:{
            printf("JANEIRO \n");
            break;
        }
        case 2:{
            printf("FEVEREIRO \n");
            break;
        }
        case 3:{
            printf("MARÇO \n");
            break;
        }
        case 4:{
            printf("ABRIL \n");
            break;
        }
        case 5:{
            printf("MAIO \n");
            break;
        }
        case 6:{
            printf("JUNHO \n");
            break;
        }
        case 7:{
            printf("JULHO \n");
            break;
        }
        case 8:{
            printf("AGOSTO \n");
            break;
        }
        case 9:{
            printf("SETEMBRO \n");
            break;
        }
        case 10:{
            printf("OUTUBRO \n");
            break;
        }
        case 11:{
            printf("NOVEMBRO \n");
            break;
        }
        case 12:{
            printf("DEZEMBRO \n");
            break;
        }
        default: {
            printf("NÃO EXISTE MÊS COM ESSE NÚMERO \n");

        }

    }
    system("pause");

}

