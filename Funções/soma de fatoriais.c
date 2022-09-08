#include <stdio.h>
#include <math.h>

unsigned long long Fatorial(int n){
    unsigned long long fat = 1;
    int i;

    for(i = 1; i <= n; i++){
        fat = fat * i;
    }
    return fat;
}

int main(void){
    int m, n, q;

    while(1){
        q = scanf("%d %d", &m, &n);
        if(q == EOF)
            break;
        printf("%llu\n", Fatorial(m) + Fatorial(n));
    }

    return 0;
}
