#include <stdio.h>
    int main(){
        int num = 0, count = 0;

        printf("Digite um numero: ");
        scanf("%d",&num);

        while (count < num ){
            
            if (count %2 != 0){
                
                printf("%d\n",count);
            }

            count++;
        }
        
        
        return 0;
    }