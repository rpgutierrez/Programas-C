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
    printf("1 - SÃO PAULO \t\t 2 - RIO DE JANEIRO \n");
    printf("3 - RIO GRANDE DO SUL \t 4 - MINAS GERAIS \n");
    printf("5 - CEARÁ \t\t 6 - SANTA CATARINA \n");
    printf("7 - PARANÁ \t\t 8 - BAHIA \n");
    printf("9 - GOIÁS \t\t 10 - ALAGOAS \n");
    printf("Digite o número  correspondente ao estado que seu time pertence: ");
    scanf(" %d", &estado);


    switch(estado){

        case 1:{
            printf("1 - PALMEIRAS \t 2 - SÃO PAULO  \n");
            printf("3 - SANTOS \t 4 - CORINTHIANS");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Palmeiras \n ", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao São Paulo \n", nome, idade);
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
            printf("1 - INTERNACIONAL \t 2 - GRÊMIO  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Internacional \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Grêmio \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 4:{
            printf("1 - ATLÉTICO/MG \t 2 - CRUZEIRO  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Atlético-MG \n", nome, idade);
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
            printf("1 - CEARÁ \t 2 - FORTALEZA  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Ceará \n", nome, idade);
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
            printf("1 - CHAPECOENSE \t 2 - AVAÍ  \n");
            printf("Escolha sua equipe: ");
            scanf("%d", &time);

            switch(time){

                case 1:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Chapecoense \n", nome, idade);
                    break;
                }
                case 2:{
                    printf("O Sr(a). %s, %d anos, filiou-se ao Avaí \n", nome, idade);
                    break;
                }

            }
            break;
        }
        case 7:{
            printf("O Sr(a). %s, %d anos, filiou-se ao Atlético-PR \n", nome, idade);
            break;
        }
        case 8:{
            printf("O Sr(a). %s, %d anos, filiou-se ao Bahia \n", nome, idade);
            break;
        }
        case 9:{
            printf("O Sr(a). %s, %d anos, filiou-se ao Goiás \n", nome, idade);
            break;
        }
        case 10:{
            printf("O Sr(a). %s, %d anos, filiou-se ao CSA \n", nome, idade);
            break;
        }



        default: {
            printf("OPÇÃO INVÁLIDA \n");

        }

    }
    system("pause");

}

