#include <stdio.h>

int main(void){
    int i;

    i= -10;
    printf("Pertence ao conjunto dos N [-10,10]:\n");
    while(i <= 10){
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
