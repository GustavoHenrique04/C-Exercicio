#include <stdio.h>
int main(){

    int num = 0;
    int contador = 0;
    int soma = 0;

    while ( contador < 10)
    {
        printf("Digite um valor : ");
        scanf("%d",&num);

        if( num > 0){

        soma = soma + num;

        printf("O resultado: \n", soma / 10);

        }

        else{
            printf("Numero negativo\n");
        }
        contador++;
    }
    
    return 0;
}