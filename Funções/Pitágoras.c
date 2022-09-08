#include <stdio.h>
#include <math.h>

/** Para todo o codigo vale que:"a" e "b" sao respectivamente os catetos e "c" a hipotenusa!
    Sendo valido o teorema de pitagoras. **/

int EhTrianguloRetangulo(double a, double b, double c){
    double soma;
    soma = pow(a,2) + pow(b,2);
    if(soma == pow(c,2)){
        return 1;
    }else
        return 0;
}

double FormaTrianguloRetangulo(double a, double b, double c){
    double cal;             /* "cal" eh usado para receber o valor resultante da operacao, para ai sim se tirar a raiz. */

    if(a <= 0 && b <= 0){
        return -1;

    }else if(a <= 0 && c <= 0){
        return -1;

    }else if(b <= 0 && c <= 0){
        return -1;

    }else if(a <= 0){
        cal = pow(c,2) - pow(b,2);
        return sqrt(cal);

    }else if(b <= 0){
        cal = pow(c,2) - pow(a,2);
        return sqrt(cal);

    }else if(c <= 0){
        cal = pow(a,2) + pow(b,2);
        return sqrt(cal);
    }

}

int main(void){
    double a, b, c, novoV;              /* "novoV" eh usado para receber o valor resultante da funcao 'FormaTrianguloRetangulo' e assim acionar corretamente o if ou else. */
    unsigned int verifica;               /* "verifica" eh anologo ao "novoV". */

    printf("Digite a, b e c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0){
        verifica = EhTrianguloRetangulo(a, b, c);
        if(verifica){
            puts("Forma um triangulo retangulo.");
        }else
            puts("Nao forma um triangulo retangulo.");
    }else if(a <= 0 || b <= 0 || c <= 0){
        novoV = FormaTrianguloRetangulo(a, b, c);
        if(novoV == -1){
            printf("A entrada eh invalida");
        }else
            a = a <= 0 ? novoV : a;
            b = b <= 0 ? novoV : b;
            c = c <= 0 ? novoV : c;
            printf("O triangulo eh: %.1lf, %.1lf e %.1lf\n", a, b, c);
    }

    return 0;
}
