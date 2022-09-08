#include <stdio.h>

int main(void){
    int a, b, soma, i;

    /*Apresentar a soma de uma sequencia de numeros*/

    scanf("%d", &a);
    scanf("%d", &b);

    while(a > 0 && b > 0){
        soma = 0;
        if(a > b){
            for(i = b; i <= a; i = i + 1){
                printf("%d ", i);
                soma = soma + i;
            }
        }else
            for(i = a; i <= b; i = i + 1){
                printf("%d ", i);
                soma = soma + i;
            }
        printf("Sum=%d\n", soma);
        scanf("%d", &a);
        scanf("%d", &b);
    }

    return 0;
}
