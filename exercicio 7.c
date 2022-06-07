#include <stdio.h>
#include <math.h>
    int main(){
        float num1,num2;

        printf("Digite o primeiro numero :");
        scanf("%f",&num1);

        printf("Digite o segundo numero :");
        scanf("%f",&num2);

        if (num1 > num2){
            printf("%f > %f", num1,num2);
        }
        else if (num2 > num1){
            printf("%f > %f", num2,num1);
        }
        else if (num1 == num2){
            printf("%f == %f", num1,num2);
        }
        
        
        return 0;
    }