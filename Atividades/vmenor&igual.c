#include <stdio.h>

int main(void){
    int a, b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    if (a == b){
        printf("O valor de a eh igual ao de b: %d\n", a, b);
        
    }else{
        if (a < b){
            printf("O valor menor foi o de a: %d\n", a);
            
        }else{
            printf("O valor menor foi o de b: %d\n", b);
        
        }
        
    
    }

    return 0;
}
