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
    return pow(sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)), 2); // formula de distancia entre dois pontos ao quadrado.
}

int main(){
    tPonto p1, p2;
    int dist;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);

    dist = Distancia(p1, p2);
    printf("%d\n", dist);

    return 0;
}
