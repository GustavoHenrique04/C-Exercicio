#include <stdio.h>
#include <math.h>
    int main(){
        int n;
        float num;

        printf("Imposto do Estado de Minas Gerais 1 = 7 porcento\n");
        printf("Imposto do Estado de São Paulo 2 = 12 porcento\n");
        printf("Imposto do Estado de Rio de Janeiro 3 = 15 porcento\n");
        printf("Imposto do Estado de Mato Grosso do Sul 4 = 8 porcento\n");

        printf("Digite o numero de qual estado : ");
        scanf("%d",&n);

        printf("Digite o valor de entrada = ");
        scanf("%f",&num);

        switch (n)
        {
        case 1:;
            printf("O valor com imposto : %0.2f",num * 1.07 );
            break;
        case 2:;
            printf("O valor com imposto : %0.2f",num * 1.12);
            break;
        case 3:;
            printf("O valor com imposto : %0.2f",num * 1.15);
            break;
        case 4:;
            printf("O valor com imposto : %0.2f",num * 1.08);
            break;
        default:
            printf("Valor inserido invalido");
            break;
        }
        return 0;
    }