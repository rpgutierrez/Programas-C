#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número entre 1 e 12 equivalente ao mês: \n");
    scanf("%d", &num);

    switch(num){

        case 1:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 2:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 3:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 4:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 5:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 6:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 7:{
            printf("A TEMPORADA NÃO ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 8:{
            printf("A TEMPORADA NÃO ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 9:{
            printf("A TEMPORADA NÃO ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 10:{
            printf("A TEMPORADA NÃO ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 11:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        case 12:{
            printf("A TEMPORADA ESTÁ EM ANDAMENTO \n");
            break;
        }
        default: {
            printf("NÃO EXISTE MÊS COM ESSE NÚMERO \n");

        }

    }
    system("pause");

}

