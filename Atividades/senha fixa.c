#include <stdio.h>

int main(void){
    int scorreta, i;

    /*Digite a senha !!!*/

    scanf("%d", &i);

    scorreta = 2002;
    while(i != scorreta){
        printf("Senha Invalida\n");
        scanf("%d", &i);
    }

    printf("Acesso Permitido\n");

    return 0;
}
