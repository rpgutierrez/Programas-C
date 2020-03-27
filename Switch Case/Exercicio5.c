#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    float n1, n2, n3, nf;
    int p1, p2, p3, modo;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a primeira nota: ");
    scanf(" %f", &n1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &n2);
    printf("Digite a terceira nota: ");
    scanf(" %f", &n3);
    printf(" 1 =  Média aritmética \t 2 = Média ponderada \n");
    printf("Digite o mode a ser realizado:");
    scanf("%d", &modo);

    switch(modo){

        case 1:{
            nf = (n1 + n2 + n3)/3;
            printf("A média final é %.2f \n", nf);
            break;
        }
        case 2:{
            printf("Digite o peso da primeira nota: ");
            scanf("%d", &p1);
            printf("Digite o peso da segunda nota: ");
            scanf("%d", &p2);
            printf("Digite o peso da terceira nota: ");
            scanf("%d", &p3);

            nf = (n1 * p1 + n2 * p2 + n3 * p3);

            printf("A média final é %.2f \n", nf);
            break;
        }
        default: {
            printf("NÃO EXISTE ESTA OPÇÃO \n");
            break;

        }

    }
    system("pause");

}

