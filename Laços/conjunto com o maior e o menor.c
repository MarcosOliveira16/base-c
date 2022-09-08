#include <stdio.h>

int main(void){
    int i, maior, menor, contador;

    printf("Apos inserir os valores desejados, digite '0' para encerrar a operacao.\n");
    i = -1;
    contador = 1;

    while(i != 0){
        scanf("%d", &i);
        if(contador == 1){
            menor = i;
            maior = i;

        }
        if (i < menor && i!= 0){
            menor = i ;
        if (i > maior && i!= 0){
            maior = i ;
            contador = contador + 1;
        }
        }
    }

    printf("O menor valor digitado foi oh: %d\n", menor);
    printf("O maior valor digitado foi oh: %d\n", maior);

    return 0;
}
