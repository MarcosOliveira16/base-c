#include <stdio.h>

int main(void){
    int i, contador;

    /*Apresentar de maneira alternada as frases citadas ate alcançar 100 repeticoes de cada!!!*/

    contador = 1;
    printf("%d-", contador);
    for(i = 1; i <= 200; i = i + 1){
        if(i % 2 == 1)
            printf("So aprende a programar quem escreve programas.\n");

        if(i % 2 == 0)
            printf("Quem nao escreve programas nao aprende a programar.\n");
            contador = contador + 1;
            printf("%d-", contador);
    }
    return 0;
}
