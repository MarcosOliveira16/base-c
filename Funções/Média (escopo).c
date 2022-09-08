#include <stdio.h>

/*** Serve para calcular a media em relaçao aos valores digitados na funçao main ***/
double AdicioneNaMedia(double valor){
    static double contador, soma;
    soma = soma + valor;
    contador++;

    return soma / contador;
}

int main(void){
    unsigned int quant, i = 1;
    double valor, media;

    printf("Digite a quantidade de valores que serao inseridos: ");
    scanf("%u", &quant);

    for(i; i <= quant; i++){
        printf("Digite o valor: ");
        scanf("%lf", &valor);
        media = AdicioneNaMedia(valor);
        printf("A media eh %.1lf\n", media);
    }

    return 0;
}
