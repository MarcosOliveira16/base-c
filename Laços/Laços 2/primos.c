#include <stdio.h>

int main(void){
    int n, i, ehPrimo;

    printf("Digite n: ");
    scanf("%d", &n);

    ehPrimo = 1;
    for(i = 2; i < n; i = i + 1){
        if (n % i == 0){
            ehPrimo = 0;
        }
    }

    if (ehPrimo){
        printf("%d eh primo.\n", n);
    }else{
        printf("%d nao eh primo.\n", n);
    }

    return 0;
}
