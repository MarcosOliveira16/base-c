#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int op; // para guardar a opção selecionada

    while(op != 4){
            // Menu
        printf("1 - Item 1"
            "\n2 - Item 2"
            "\n3 - Item 3"
            "\n4 - Sair\n");

        scanf("%d", &op);

        switch(op){
            case 1:
                printf("Item 1\n");
                break;
            case 2:
                printf("Item 2\n");
                break;
            case 3:
                printf("Item 3\n");
                break;
            case 4:
                printf("Sair\n");
                break;
            default:
                printf("Opcao %d Invalida\n", op);
        }
    }

    return 0;
}
