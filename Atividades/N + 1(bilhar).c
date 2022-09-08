#include <stdio.h>
#include <math.h>

double distancia(int xb, int yb, int x, int y){
    int dAB;

    dAB = pow(x - xb,2) + pow(y - yb,2);

    return sqrt(dAB);
}

int main(void){
    int t, n, x, y, xb, yb, nBola, contador = 0;     /* n = quantidades de bolas(execeto a branca) ; "xb" e "yb" coordenadas da bola branca; "x" e "y", coordenadas das outras bolas   */;
    double cal;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        scanf("%d %d", &xb, &yb);
        while(n--){
            scanf("%d %d", &x, &y);
            cal = distancia(xb, yb, x, y);
            contador++;
            nBola = contador;
        }
    }

    return 0;
}
