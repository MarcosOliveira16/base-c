#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float delta, x1, x2;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    if (a == 0){
        printf("Os coeficientes não formam uma equacao do segundo grau");
        return 1;
    }  
              
    delta = b*b - 4*a*c;
    
    if (delta < 0){
        printf("A equacao não possui raizes reais");
        return 2;
    } 
        
    
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    
    if (delta == 0){
        printf("A raiz sera unica: %.1f\n", x1);
    }else{
        printf("A raizes sao x1: %.1f e x2: %.1f\n", x1, x2);
        
    }
    
    
    
    
    return 0;
}
