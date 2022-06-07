#include <stdio.h>
#include <math.h>
int main()
{
  float num;
  
  //leia o numero real
  printf("Crie um valor : ");
  scanf("%f",& num);
  
  //se o numero for positivo imprima a raiz quadrada
  if (num >0){
    float raiz = sqrt(num);
    printf("√%0.2f = %0.2f",num,raiz);
  }
  
  //se o numero for negativo imprima ao quadrado
  else{
    float potencia = pow(num,2);
    printf("%0.2f ^ 2 = %0.2f", num,potencia);
  }
  return 0;
}
