#include <stdio.h>
#include <string.h>

int main(){
    unsigned int t, i;      // i contador para limitar o for e indicar qual palpite esta sendo imprimido.
    char op1[] = "lagarto", op2[] = "papel", op3[] = "pedra", op4[] = "Spock", op5[] = "tesoura";   // Opçoes no jogo no estilo pedra , papel e tesoura.
    char palpite1[50], palpite2[50];    // Strings para receber os palpites dos jogadores.

    scanf("%d", &t);    // Leitura dos testes.

    for(i = 1; i <= t; i++){
        scanf("%s %s", palpite1, palpite2);
        if(0 == strcmp(palpite1, palpite2)){        // strcmp se os palpites forem iguais retorna "0".
            printf("Caso #%d: De novo!\n", i);

        }else if(0 == strcmp(palpite1, op1)){
            if((0 == strcmp(palpite2, op2)) || (0 == strcmp(palpite2, op4)))
                printf("Caso #%d: Bazinga!\n", i);

            else if((0 == strcmp(palpite2, op3)) || (0 == strcmp(palpite2, op5)))
                printf("Caso #%d: Raj trapaceou!\n", i);

        }
        else if(0 == strcmp(palpite1, op2)){
            if((0 == strcmp(palpite2, op3)) || (0 == strcmp(palpite2, op5)))
                printf("Caso #%d: Bazinga!\n", i);

            else if((0 == strcmp(palpite2, op1)) || (0 == strcmp(palpite2, op4)))
                printf("Caso #%d: Raj trapaceou!\n", i);

        }
        else if(0 == strcmp(palpite1, op3)){
            if((0 == strcmp(palpite2, op1)) || (0 == strcmp(palpite2, op4)))
                printf("Caso #%d: Bazinga!\n", i);

            else if((0 == strcmp(palpite2, op2)) || (0 == strcmp(palpite2, op5)))
                printf("Caso #%d: Raj trapaceou!\n", i);

        }
        else if(0 == strcmp(palpite1, op4)){
            if((0 == strcmp(palpite2, op2)) || (0 == strcmp(palpite2, op5)))
                printf("Caso #%d: Bazinga!\n", i);

            else if((0 == strcmp(palpite2, op3)) || (0 == strcmp(palpite2, op1)))
                printf("Caso #%d: Raj trapaceou!\n", i);

        }
        else if(0 == strcmp(palpite1, op5)){
            if((0 == strcmp(palpite2, op1)) || (0 == strcmp(palpite2, op3)))
                printf("Caso #%d: Bazinga!\n", i);

            else if((0 == strcmp(palpite2, op2)) || (0 == strcmp(palpite2, op4)))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}
