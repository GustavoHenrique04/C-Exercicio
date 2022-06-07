#include <stdio.h>
#include <math.h>
    int main (){

        int a,b,c;
        int equilatero = a = b = c;
        int isosceles = a = b != c;
        int escaleno = a != b != c;

        printf("Digite o valor de A = ");
        scanf("%d",&a);

        printf("Digite o valor de B = ");
        scanf("%d",&b);

        printf("Digite o valor de C = ");
        scanf("%d",&c);

        if ( a && b && c == equilatero){
            printf("O triangulo é Equilatero = %d",equilatero);
        }
        
        else if ( a && b && c == isosceles){
            printf("O triangulo é Isosceles = %d",isosceles);
        }

        else if( a && b && c == escaleno){
            printf("O tringulo é Escaleno = %d",escaleno);
        }
        
        return 0;
    }