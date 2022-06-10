#include <stdio.h>
    
int main(){

    int num = 0;
    int contador = 0;
    int soma = 0;

    while (contador < 10 )
    {
        printf("Digite um valor: ");
        scanf("%d",&num);

        soma = soma + num;

        contador++;

    }
    
        printf("O resultado é: %d", soma / 10);

    return 0;
}