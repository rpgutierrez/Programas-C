#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void){
    char nome[100];
    int idade, estado, time;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("1 - S�O PAULO \t\t 2 - RIO DE JANEIRO \n");
    printf("3 - RIO GRANDE DO SUL \t 4 - MINAS GERAIS \n");
    printf("5 - CEAR� \t\t 6 - SANTA CATARINA \n");
    printf("7 - PARAN� \t\t 8 - BAHIA \n");
    printf("9 - GOI�S \t\t 10 - ALAGOAS \n");
    printf("Digite o n�mero  correspondente ao estado que seu time pertence: ");
    scanf(" %d", &estado);


    switch(estado){

        case 1:{
            printf("1 - PALMEIRAS \t 2 - S�O PAULO  \n");
            printf("3 - SANTOS \t 4 - CORINTHIANS");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Palmeiras \n ", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao S�o Paulo \n", nome, idade);
                    break;
                }
                case 3:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Santos \n", nome, idade);
                    break;
                }
                case 4:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Corinthians \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 2:{
            printf("1 - FLAMENGO \t 2 - BOTAFOGO  \n");
            printf("3 - FLUMINENSE \t 4 - VASCO");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Flamengo \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Botafogo \n", nome, idade);
                    break;
                }
                case 3:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Fluminense \n", nome, idade);
                    break;
                }
                case 4:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Vasco \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 3:{
            printf("1 - INTERNACIONAL \t 2 - GR�MIO  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Internacional \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Gr�mio \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 4:{
            printf("1 - ATL�TICO/MG \t 2 - CRUZEIRO  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Atl�tico-MG \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Cruzeiro \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 5:{
            printf("1 - CEAR� \t 2 - FORTALEZA  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Cear� \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Fortaleza \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 6:{
            printf("1 - CHAPECOENSE \t 2 - AVA�  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Chapecoense \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Ava� \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 7:{
            printf("O Sr(a). %s, %d anos, filiou-se ao Atl�tico-PR \n", nome, idade);
            break;
        }
        case 8:{
            printf("O Sr(a). %s, %d anos, filiou-se ao Bahia \n", nome, idade);
            break;
        }
        case 9:{
            printf("O Sr(a). %s, %d anos, filiou-se ao Goi�s \n", nome, idade);
            break;
        }
        case 10:{
            printf("O Sr(a). %s, %d anos, filiou-se ao CSA \n", nome, idade);
            break;
        }



        default: {
            printf("OP��O INV�LIDA \n");

        }

    }
    system("pause");

}

