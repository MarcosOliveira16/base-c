#include <stdio.h>

int main(void){
    int n, valor, i;

    /*Numeros de casos tem que ser menor que 10000*/

    /*Apresentar se um numero eh*/

    scanf("%d", &n);

    for(i = 1; i <= n; i = i +1){
        scanf("%d", &valor);
        if(valor % 2 == 0 && valor > 0){
            printf("EVEN POSITIVE\n");
        }else if(valor % 2 == 0 && valor < 0){
            printf("EVEN NEGATIVE\n");
        }else if(valor % 2 == 1 && valor > 0){
            printf("ODD POSITIVE\n");
        }else if(valor % 2 == -1 && valor < 0){
            printf("ODD NEGATIVE\n");
        }else
            printf("NULL\n");
    }

    return 0;
}
