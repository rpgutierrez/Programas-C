#include <stdio.h>
#include <stdlib.h>

int main(){
    #define C100 2.00
    #define C101 3.00
    #define C102 2.50
    #define C103 3.50
    #define C104 1.50
    #define C105 2.40
    float cod, total;
    int quant;

    printf("Digite o codigo do produto: \n");
    scanf("%f", &cod);
    printf("Digite a quantidade do item: ");
    scanf("%d", &quant);


    if( cod == 100 ){
        cod = C100;
        printf("CAFE EXPRESSO PEQUENO \n");
        printf("valor UNITARIO %.2f \n", cod);
        total = cod * quant;
        printf("VALOR TOTAL = R$ %.2f \n", total);
    }else if( cod == 101 ){
        cod = C101;
        printf("CAFE EXPRESSO GRANDE \n");
        printf("VALOR UNITARIO = R$ %.2f \n", cod);
        total = cod * quant;
        printf("VALOR TOTAL = R$ %.2f \n", total);
    }else if( cod == 102 ){
        cod = C102;
        printf("CAFE COM LEITE PEQUENO \n");
        printf("VALOR UNITARIO = R$ %.2f \n", cod);
        total = cod * quant;
        printf("VALOR TOTAL = R$ %.2f \n", total);
    }else if( cod == 103 ){
        cod = C103;
        printf("CAFE COM LEITE GRANDE \n");
        printf("VALOR UNITARIO = R$ %.2f \n", cod);
        total = cod * quant;
        printf("VALOR TOTAL = R$ %.2f \n", total);
    }else if( cod == 104 ){
        cod = C104;
        printf("AGUA SEM GAS (200ml) \n");
        printf("VALOR UNITARIO = R$ %.2f \n", cod);
        total = cod * quant;
        printf("VALOR TOTAL = R$ %.2f \n", total);
    }else if( cod == 105 ){
        cod = C105;
        printf("AGUA COM GAS (500ml) \n");
        printf("VALOR UNITARIO = R$ %.2f \n", cod);
        total = cod * quant;
        printf("VALOR TOTAL = R$ %.2f \n", total);
    }

}
