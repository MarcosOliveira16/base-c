#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador, i;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	contador = 0;
	i = 0;
	while (palpite != correto && i < 5) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        contador = contador + 1;

            if (palpite > correto){
                puts("Palpite alto!\n");
            }else if (palpite < correto){
                puts("Palpite foi baixo!\n");
            }
            i = i + 1;
	}
	if(palpite == correto){
        puts("Voce ganhou!\n");
	}else
        puts("Voce perdeu!\n");
    printf("Foram feitos %d palpites.\n", contador);

	return 0;
}
