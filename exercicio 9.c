#include <stdio.h>
#include <math.h>
 int main(void){
     
     float salario,emprestimo;

    printf("Digite o salario :$");
    scanf("%f",&salario);

    printf("Digite o emprestimo :$");
    scanf("%f",&emprestimo);

    float comparacao = salario * 1.02;
    float prestacao = comparacao + emprestimo;

    if (emprestimo > salario)
    {
        printf("Emprestimo não concedido.");
    }
    else{
        printf("Emprestimo concedido.");
    }
    

     return 0;
 }