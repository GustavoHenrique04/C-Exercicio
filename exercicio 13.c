#include <stdio.h>

int main(){
    float prova1,prova2,prova3;

    printf("Digite o valor da primeira prova : ");
    scanf("%f",&prova1);

    printf("Digite o valor da segunda prova : ");
    scanf("%f",&prova2);

    printf("Digite o valor da segunda prova : ");
    scanf("%f",&prova3);

    float media = (prova1 * 1) + (prova2 * 1) + (prova3)/3;

    if (media > 6){
        printf("Aluno foi aprovado = %0.2f",media);
    }
    else{
        printf("Aluno reprovado = %0.2f",media);
    }
    return 0;
}
