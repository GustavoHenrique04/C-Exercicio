#include <stdio.h>
#include <math.h>

    int main(){
        int num;

        printf("Digite um numero inteiro :");
        scanf("%d",&num);

        if ((num % 2 )== 0){

            printf("Numero é par : %d", num);

        }
        else{
            printf("Numero é ímpar : %d", num);
        }
        return 0;
    }