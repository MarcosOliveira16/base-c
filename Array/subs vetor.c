#include <stdio.h>

int main(){
    int x[10], i;           /** Apresenta o valor de acordo com a posicao, se for nulo ou negativo, apresentar o numero 1. **/

    for(i = 0; i < 10; i++){
        scanf("%d", &x[i]);
        if(x[i] <= 0){
            printf("X[%d] = 1\n", i);
        }else{
            printf("X[%d] = %d\n", i, x[i]);
        }
    }

    return 0;
}
