#include <stdio.h>

int main(void){
    float valor, s, r;
    int p;
       
    scanf("%f", &valor);
    
    if(valor > 0 && valor <= 400){
        s = valor + (valor * 0.15);
        r = valor * (0.15);
        p = 15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s, r, p);
    
    }else if(valor > 400 && valor <= 800){
        s = valor + (valor * 0.12);
        r = valor * (0.12);
        p = 12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s, r, p);
        
    }else if(valor > 800 && valor <= 1200){
        s = valor + (valor * 0.10);
        r = valor * (0.10);
        p = 10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s, r, p);
        
    }else if(valor > 1200 && valor <= 2000){
        s = valor + (valor * 0.07);
        r = valor * (0.07);
        p = 7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s, r, p);
        
    }else if(valor > 2000){  
        s = valor + (valor * 0.04);
        r = valor * (0.04);
        p = 4;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s, r, p);
    
    }

    return 0;
}
