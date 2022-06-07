#include <stdio.h>
#include <math.h>
int main(void) 
{
  float num;
  
   printf("digite um numero:");
  scanf("%f",&num);

 if (num > 0){
  float raiz = sqrt(num);
   printf("%f",raiz);
 } 
  else{
    printf("Número é inválido");
  }
  
  return 0;
}