#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// estrutura de um ponto no R2.
typedef struct{
    int x;
    int y;
    }tPonto;

int Distancia(tPonto p1, tPonto p2){
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)); // formula de distancia entre dois pontos.
}

int main(){
    tPonto p1;
    int dist, n, i, menorDist = 9999999;
    int menorIndice;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &n);

    tPonto quant[n];
    for(i = 0; i < n; i++){
        scanf("%d", &quant[i].x);
        scanf("%d", &quant[i].y);

        dist = Distancia(p1, quant[i]);
        if(dist < menorDist){
            menorDist = dist;
            menorIndice = i;
        }
    }
    printf("Ponto mais perto é (%d, %d)\n", quant[menorIndice].x, quant[menorIndice].y);

    return 0;
}
