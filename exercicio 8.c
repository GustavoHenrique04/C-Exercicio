#include <stdio.h>
#include <math.h>
    int main(void){
        float nota1,nota2;

        printf("Digite nota nota 1 :");
        scanf("%f",&nota1);

        printf("Digite note note 2 :");
        scanf("%f",&nota2);

        if ((nota1 <= 0.0 || nota1 >= 10.0) || (nota2 <= 0.0 || nota2 >= 10.0 ))
        {
            
             printf("Finalizar Programa");
        }

        else{

            float media = (nota1 + nota2)/2;

        printf("Media da prova é : %0.2f + %0.2f = %0.2f", nota1,nota2,media);
            
        }

        return 0;
    }