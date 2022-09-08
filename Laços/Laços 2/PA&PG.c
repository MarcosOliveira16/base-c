#include <stdio.h>

int main(void){
    char tipo;
    int t1, r, n, t, i, soma;

    printf("Digite \'a\' para PA ou \'g\' para PG: ");
    scanf("%c", &tipo);
    printf("Digite o primeiro termo 't1': ");
    scanf("%d", &t1);
    printf("Digite a razao 'r': ");
    scanf("%d", &r);
    printf("Digite o numero total de termos 'n': ");
    scanf("%d", &n);

    soma = 0;
    for(i = 1; i <= n; i = i + 1){
        printf("t%d: %d\n", i, t);
        soma = soma + t;
        if(tipo == 'a'){
            t = t + r;

        }else{
            t = t * r;
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}
