#include <stdio.h>

int main(void){
    int contador, soma, i;
    double media;

    /*Digite as idades e apos todas digite '0' para encerrar o programa*/

    scanf("%d", &i);


    contador = 0;
    soma = 0;
    while(i > 0){
        contador = contador + 1;
        soma = soma + i;
        scanf("%d", &i);
    }

    media = soma / (contador * 1.0) ;
    printf("%.2lf\n", media);

    return 0;
}
