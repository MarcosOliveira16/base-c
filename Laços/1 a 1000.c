#include <stdio.h>

int main(void){
    int i;

    printf("Pertence ao conjunto dos N [1,1000]:\n");
    for (i = 1; i <= 1000; i = i + 1){
        if(i % 6 == 0 && i % 10 == 4){
        printf("%d\n", i);
        }
    }
    return 0;
}
