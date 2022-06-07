#include <stdio.h>
#include <math.h>
    int main(void)
    {
        float operacao;

        printf("Digite 1 para soma\n");
        printf("Digite 2 para subtração\n");
        printf("Digite 3 para multipçicação\n");
        printf("Digite 4 para Divisão\n");
        printf("Digite o valor : ");

        scanf("%f",&operacao);

        if ( operacao == 1){
            float nume1,nume2;
            printf("Digite o primeiro valor para ser somado");
            scanf("%f",&nume1);

            printf("Digite o segundo valor para ser somado");
            scanf("%f",&nume2);

            float soma = nume1 + nume2;
            printf("O resultado é = %f",soma);
        }
        else if ( operacao == 2){
            float nume1,nume2;
            printf("Digite o primeiro valor da subtracao");
            scanf("%f",&nume1);

            printf("Digite o segundo valor da subtracao");
            scanf("%f",&nume2);

            float subtracao = nume1 - nume2;
            printf("O resultado é = %f",subtracao);
        }
        else if ( operacao == 3){
            float nume1,nume2;

            printf("Digite o primeiro valor para ser multiplicado");
            scanf("%f",&nume1);

            printf("Digite o segundo valor para ser multiplicado");
            scanf("%f",&nume2);

            float multiplicacao = nume1 * nume2;

            printf("O resultado é = %f",multiplicacao);
            }
        else if( operacao == 4){
            float nume1,nume2;

            printf("Digite o primeiro valor para ser dividido");
            scanf("%f",&nume1);

            printf("Digite o segundo valor para ser dividio");
            scanf("%f",&nume2);

            float divisao = nume1 / nume2;

            printf("O resultado é = %f",divisao);
        }
        return 0;
    }