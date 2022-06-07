#include <stdio.h>

int main(){
    float baseMenor,baseMaior,altura;

    printf("Digite a base manor de um Trapézio = ");
    scanf("%f",&baseMenor);

    printf("Digite a base maior de um Trapézio = ");
    scanf("%f",&baseMaior);

    printf("Digite a altura de um trapézio = ");
    scanf("%f",&altura);

    float soma = (baseMenor + baseMaior) * altura /2;

    printf("A área do Trapézio é = %0.2f",soma);
    
    return 0;
}