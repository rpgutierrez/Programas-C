#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c;

    printf("Digite o comprimento do lado a: \n");
    scanf("%f", &a);
    printf("Digite o comprimento do lado b: \n");
    scanf("%f", &b);
    printf("Digite o comprimento do lado c: \n");
    scanf("%f", &c);

    if( a + b < c || c + b < a || a + c < b ){
        printf("NAO E TRIANGULO");
    }else if( a == b && b == c){
        printf("EQUILATERO");
    }else if( a == b && b != c || c == b && b != a || c == a && a != b){
        printf("ISOSCELES");
    }else if ( a != b != c){
        printf("ESCALENO");
    }

}
