#include <stdio.h>

int main(void){
    double x, y, z;
    double a, b, c;

    scanf("%lf %lf %lf", &x, &y, &z);

/////////Definição da ordem crescente/////////////////////////////////////////////////////////

    if((x > y) && (x > z) && (y > z)){          // Aqui começa quando x é o maior
        a = x;
        b = y;
        c = z;
    }else if((x > y) && (x > z) && (z > y)){
        a = x;
        b = z;
        c = y;
    }else if((y > x) && (y > z) && (x > z)){    // Aqui começa quando y é o maior
        a = y;
        b = x;
        c = z;
    }else if((y > x) && (y > z) && (z > x)){
        a = y;
        b = z;
        c = x;
    }else if((z > x) && (z > y) && (x > y)){    // Aqui começa quando z é o maior
        a = z;
        b = x;
        c = y;
    }else if((z > x) && (z > y) && (y > x)){
        a = z;
        b = y;
        c = x;
    }else if((x == y) && (y == z)){           // Quando todos são iguais
        a = x;
        b = y;
        c = z;
    }else if((x == y) && (x > z)){          // Aqui começa quando há 1 igualdade
        a = x;
        b = y;
        c = z;
    }else if((x == y) && (x < z)){
        a = z;
        b = x;
        c = y;
    }else if((y == z) && (y > x)){
        a = y;
        b = z;
        c = x;
    }else if((y == z) && (y < x)){
        a = x;
        b = y;
        c = z;
    }else if((z == x) && (z > y)){
        a = z;
        b = x;
        c = y;
    }else if((z == x) && (z < y)){
        a = y;
        b = z;
        c = x;
    }

///////Classificações do triangulo///////////////////////////////////////////////////////////////

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(a*a == b*b + c*c){
        printf("TRIANGULO RETANGULO\n");
    }
    if(a*a > b*b + c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a*a < b*b + c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((a == b) && (b == c)){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(((a == b || a == c) && (a != b || a != c)) || ((b == c) && (b != a || b != c))){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
