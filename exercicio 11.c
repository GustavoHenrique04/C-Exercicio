#include <stdio.h>

int main()

{
    int numero =0;
    int digito =0;
    int soma =0;

    printf("Digite um numero ");
    scanf("%d",&numero);

    if (numero > 0 ){
        while (numero > 0){
            digito = numero %10;
            soma = soma + digito;
            numero = numero / 10;
        }

        printf("O Algarismo = %d",soma);
    }
    
    else{
        printf("Numero invalido");
    }
    return 0; 
}