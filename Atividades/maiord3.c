#include <stdio.h>

int main(void){
    int a, b, c;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    
    if (a > b){
        if (a > c){
            printf("O maior valor foi o de a: %d\n", a);
        }else{
            printf("O maior valor foi o de c: %d\n", c); 
        }   
    }else {
        if (b > c){
            printf("O maior valor foi o de b: %d\n", b);
        }else{
            printf("O maior valor foi o de c: %d\n", c); 
        }   
    }
    
    return 0;
}
