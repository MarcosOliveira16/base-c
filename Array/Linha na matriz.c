#include <stdio.h>

/** Programa para ler e soma ou apresentar a media do elementos de determinada linha e coluna escolhidas. **/

int main(){
    int l, i, j;
    char oper;              /** Para escolher se a operacao eh uma soma ou media. **/
    double m[12][12], soma = 0;


    scanf("%d%*c", &l);     /** %*c para eliminar o caractere \n q tb eh lido. **/
    scanf("%c", &oper);

    for(i = 0 ; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for(j = 0; j < 12; j++){
        soma += m[l][j];
    }
    if(oper == 'S'){
        printf("%.11f\n", soma);
    }else{
        printf("%.1lf\n", soma / 12);
    }


    return 0;
}
