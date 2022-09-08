#include <stdio.h>

int main(void){
    int n, valor, contadorIn, contadorOut, i;

    /*Numeros de casos tem que ser menor que 10000*/

    /*Apresentar os valores que estao no intervalo [10,20]*/

    scanf("%d", &n);

    contadorIn = 0;
    contadorOut = 0;
    for(i = 1; i <= n; i = i +1){
        scanf("%d", &valor);
        if(valor >= 10 && valor <= 20){
            contadorIn = contadorIn + 1;
        }else
            contadorOut = contadorOut + 1;
    }

    printf("%d in\n", contadorIn);
    printf("%d out\n", contadorOut);

    return 0;
}
