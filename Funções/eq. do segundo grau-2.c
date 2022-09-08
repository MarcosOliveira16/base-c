#include <stdio.h>
#include <math.h>

double Delta(float a, float b, float c){
    return pow(b, 2) - 4*a*c;
}

double RaizX1(double a, double b, double delta){
    double soma = -b + sqrt(delta);
    return  soma / (2*a);
}

double RaizX2(double a, double b, double delta){
    double soma = -b - sqrt(delta);
    return soma / (2*a);
}

int main(void){
    float a, b, c;
    double delta, r1, r2;

    puts("Digite a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0){
        puts("Os coeficientes nao formam uma equacao do segundo grau.");
        return 1;
    }

    delta = Delta(a, b, c);
    if(delta < 0){
        puts("Nao existem raizes.");
        return 2;
    }

    r1 = RaizX1(a, b, delta);

    r2 = RaizX2(a, b, delta);
    if(delta == 0){
        printf("A raiz eh: %.1lf\n", r1);
    }else
        printf("As raizes sao: %.1lf e %.1lf\n", r1, r2);

    return 0;
}
