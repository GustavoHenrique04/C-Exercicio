#include <stdio.h>
#include <math.h>
    int main(){
        
        int num;

        printf("Digite um numero");
        scanf("%d",&num);

        if (num > 0){
            int logaritmo = log10(num);
            printf("Logaritmo é = %d",logaritmo);
        }
        else{
            printf("Numero invalido.");
        }
        return 0;
    }