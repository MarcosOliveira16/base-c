#include <stdio.h>

int main(void){
    int t, n, ehPrimo, i = 1;

    scanf("%d", &t);

    for(i; i <= t; i++){
        scanf("%d", &n);
        ehPrimo = 1;
        for(i = 2; i < n; i++){
            if (n % i == 0){
                ehPrimo = 0;
            }
        }
        if(ehPrimo){
            printf("%d eh primo.\n", n);
        }else{
            printf("%d nao eh primo.\n", n);
        }
    }
    return 0;
}
