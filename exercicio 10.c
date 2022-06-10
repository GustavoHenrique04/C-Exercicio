#include <stdio.h>
    int main(){

        int count = 0;

        while (count < 50)
        {
            if( count %2 == 0){

                printf("%d\n",count);
            }
        count++;
        }
        

        return 0;
    }