#include <stdio.h>

int main(){
    int n[20], i, j, aux;

    for(i = 0; i < 20; i++){            /** Trocar os elementos dos indices, primeiro pelo ultimo e assim sucessivamente. **/
        scanf("%d", &n[i]);
    }
    for(i = 0, j = 19;i < 10; i++, j--){
        aux = n[i];
        n[i] = n[j];
        n[j] = aux;
    }
    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
