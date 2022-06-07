#include <stdio.h>
#include <math.h>
    int main(){

        float num;
        printf("Digite um numero :");
        scanf("%f",&num);

        if ( num > 0){

            float potencia = pow(num,2);
            float raiz = sqrt(potencia);

            printf("%0.2f ^ 2 = %0.2f\n", num, potencia);
            printf("√ %0.2f = %0.2f ", potencia , raiz);

        }
        else{
            printf("Numero é negativo");
        }

        return 0;
    }