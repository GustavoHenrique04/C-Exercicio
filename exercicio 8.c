#include <stdio.h>

int main(){

int num = 0;
int contador = 0;
int numMaior = 0;
int numMenor = 0;

while ( contador < 10){
    printf("Digite um numero: ");
    scanf("%d",&num);

    if(contador == 0){

        numMaior = num;
        numMenor = num;
    }

    if (num > numMaior){

        numMaior = num;
    }
    if (num < numMenor){

        numMenor = num;
    }
    contador++;
}

    printf("O numero maior é: %d\n",numMaior);
    printf("O numero menor é: %d",numMenor);
return 0;

}