#include <stdio.h>
int main(){
    float nota1, nota2,nota3;

    printf("Digite o valor da primeira prova : ");
    scanf("%f",&nota1);

    printf("Digite o valor da primeira prova : ");
    scanf("%f",&nota2);

    printf("Digite o valor da terceira prova");
    scanf("%f",&nota3);

    float media = nota1 * 2 + nota2 * 3 + nota3 * 5;
    float resultado = media / 10;

    if( resultado < 2.9){
        printf("Aluno reprovado = %0.2f",resultado);
    }
    else if(resultado < 4.9){
        printf("Aluno de Recuperação = %0.2f",resultado);
    }
    else if(resultado > 4.9){
        printf("Aluno Aprovado = %0.2f",resultado);
    }
    return 0;
}