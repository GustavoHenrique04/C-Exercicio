#include <stdio.h>
int main(void)

{
  int dia;
  int diaMes;
  int Ano;

  printf("Qual o dia do seu aniversario?\n");
  scanf(" %d" ,&dia);

  printf("Qual o dia do mês do seu aniversario?\n");
  scanf(" %d" ,&diaMes);

  printf("Qual o Ano que você nasceu?\n");
  scanf("%d", &Ano);

  int idade= 2022-Ano;
  
  printf("%d/%d/%d.\nVocê tem %d Anos", dia, diaMes,Ano,idade);

 
  }
  