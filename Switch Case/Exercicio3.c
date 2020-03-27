#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    int cod, quant;
    float valor;
    setlocale(LC_ALL, "Portuguese");

    printf("\t\t CARDÁPIO \n\n");
    printf("Cachorro quente \t COD 100 \n");
    printf("Bauru simples \t \t COD 101 \n");
    printf("Bauru com ovo \t \t COD 102 \n");
    printf("Hambúrguer \t \t COD 103 \n");
    printf("Cheeseburguer \t \t COD 104 \n");
    printf("Refrigerante \t \t COD 105 \n\n");
    printf("Digite o código do produto: ");
    scanf("%d", &cod);
    printf("Digite a quantidade: ");
    scanf("%d", &quant);

    switch(cod){

        case 100:{
            valor = (1.20 * quant);
            printf("O VALOR TOTAL É DE: R$%f \n", valor);
            break;
        }
        case 101:{
            valor = (1.30 * quant);
            printf("O VALOR TOTAL É DE: R$%f \n", valor);
            break;
        }
        case 102:{
            valor = (1.50 * quant);
            printf("O VALOR TOTAL É DE: R$%f \n", valor);
            break;
        }
        case 103:{
            valor = (1.20 * quant);
            printf("O VALOR TOTAL É DE: R$%f \n", valor);
            break;
        }
        case 104:{
            valor = (1.30 * quant);
            printf("O VALOR TOTAL É DE: R$%f \n", valor);
            break;
        }
        case 105:{
            valor = (1.00 * quant);
            printf("O VALOR TOTAL É DE: R$%f \n", valor);
            break;
        }
        default: {
            printf("CÓDIGO INVÁLIDO \n");

        }

    }
    system("pause");

}
