#include <stdio.h>

int main(void){
    int i;

    i = -10;
    printf("Pertence ao conjunto dos N [-10,10]:\n");
    do{
        printf("%2d\n", i);
        i = i + 1;
    }while(i <= 10);


    return 0;
}
