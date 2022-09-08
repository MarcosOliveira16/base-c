#include <stdio.h>

int main(void){
    int i, soma, contador;
    float media;

    printf("Apos inserir os valores desejados, digite '0' para encerrar a operacao.\n");
    i = -1;
    soma = 0;
    contador = 0;
    while(i != 0){
        printf("Digite o valor inteiro: ");
        scanf("%d", &i);
        if (i != 0){
            soma = soma + i;
            contador = contador + 1;
        }
    }
    printf("A soma dos valores eh: %d\n", soma);
    printf("Foram digitados %d numeros\n", contador);
    media = soma / (contador*1.0);
    printf("A media eh: %.1f\n", media);

    return 0;
}
