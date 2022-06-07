#include <stdio.h>
#include <math.h>
    int main(void){

        float altura, peso;
        int sexo;

        printf("Digite a Altura :");
        scanf("%f",&altura);

        printf("Digite o seu peso :");
        scanf("%f",&peso);

        printf("Digite o Sexo : 1 para masculino e 2 para feminino :");
        scanf("%d",&sexo);
        
        if (sexo == 1){
            float pesoIdeal = (peso * altura) - 58;
            printf("O seu peso ideal é : %0.2f",pesoIdeal);
        }
        else if (sexo == 2){
            float pesoIdeal = (peso * altura) - 44.7;
            printf("O seu peso ideal é : %0.2f",pesoIdeal);
        }
        
        return 0;
    }