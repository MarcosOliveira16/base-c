#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Código para exibir soma de matrizes, feito ao ver a aula do dia 16/08.

int m, n;   // variaveis globais para tamanho das matrizes.

// função para somar as matrizes digitados na main.
void somaMatriz(int matrizA[m][n],int matrizB[m][n]){
    int i, j;
    int matrizSoma[m][n];

    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++){
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for(i = 0 ; i < m; i++){
        for(j = 0; j < n-1; j++){
            printf("%d ", matrizSoma[i][j]);
        }
        printf("%d\n", matrizSoma[i][j]);
    }

}

int main(){
    int i, j;

    scanf("%d %d", &m, &n);

    int matrizA[m][n], matrizB[m][n];

    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

   somaMatriz(matrizA, matrizB);

    return 0;
}
