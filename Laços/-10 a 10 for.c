#include <stdio.h>

int main(void){
    int i;

    printf("Pertence ao conjunto dos N [-10,10]:\n");
    for (i = -10; i <= 10; i = i + 1){
        printf("%2d\n", i);
    }

    return 0;
}
