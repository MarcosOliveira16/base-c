#include <stdio.h>
#include <math.h>

int EhPrimo(unsigned long x){
    int cal = 0, i = 2, contador = 0;

    for(i; i <= x; i++){
        cal = x / i;
        if(cal == 1){
            contador++;
        }
    }
    if(cal == contador){
        return 1;
    }else
        return 0;
}

int main(void){

    unsigned long x;
    int n, verifica;

    scanf("%d", &n);

    while(n--){
        scanf("%lu", &x);
        verifica = EhPrimo(x);
        if(verifica){
            printf("Prime\n");
        }else
            printf("Not Prime\n");
    }

    return 0;
}
