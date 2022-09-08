#include <stdio.h>


int main(void){
    int i;

    i= 1;
    printf("Pertence ao conjunto dos N [10,1]:\n");
    while(i <= 10){                                      /*Apresentar os numeros inteiros de 1 a 10*/
        printf("%d\n", i);                               /*N = conjunto dos inteiros*/
        i = i + 1;
    }

    return 0;
}

