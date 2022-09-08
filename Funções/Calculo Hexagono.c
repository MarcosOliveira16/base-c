#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *area, float *perimetro){
    *perimetro = 6*l;
    *area = (3*l*l*sqrt(3)) / 2;
}

int main(){
    float lado, area, per;

    printf("Digite o valor do lado: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, &area, &per);


    printf("Para o hexagono de lado %.1f:\n\tArea: %.1f\n\tPerimetro: %f.1", lado, area, per);

    return 0;
}
