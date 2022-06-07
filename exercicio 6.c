#include <stdio.h>
#include <math.h>
    int main(){

        int num1;
        int num2;

        printf("Digite o primeiro valor :");
        scanf("%d",&num1);

        printf("Digite o segundo valor :");
        scanf("%d",&num2);

        if ( num1 > num2){
            int subtracao = num1 - num2;

            printf("%d - %d = %d", num1,num2,subtracao);
        }
        else{
            int subtracao = num2 - num1;

            printf("%d - %d = %d", num2,num1,subtracao);
        }
        return 0;
    }