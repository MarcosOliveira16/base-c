#include <stdio.h>

int main(void){
    int i,a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if(a > b){
        i = b;
        printf("Pertence ao intervalo de [%d a %d]\n", b, a);
        while(i <= a){
            printf("%d\n", i);
            i = i + 1;
        }
    }else{
        i = a;
        printf("Pertence ao intervalo de [%d a %d]\n", a, b);
        while(i <= b){
            printf("%d\n", i);
            i = i + 1;
        }
    }
    return 0;
}
