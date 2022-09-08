#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador, soma;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	contador = 0;
	soma = 0;
    while(palpite != correto && soma < 5){
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if(palpite > correto){
                puts("Palpite alto");

            }else if(palpite < correto)
                puts("Palpite baixo!");

            contador = contador + 1;
            soma = soma + 1;
            palpite = palpite + 1;
    }

    printf("Foram feitos %d palpites.\n", contador);
    if(palpite != correto){
        puts("Voce perdeu");
    }else
        puts("Voce ganhou");

	return 0;
}
