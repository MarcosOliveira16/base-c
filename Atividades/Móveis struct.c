#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// estrutura de dados de um jogador.
typedef struct Movel{
    char descricao[50];
    float peso;
    char tipo;
    }tMovel;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    tMovel Movel[30];
    int n, i, tipoS = 0, terminaR = 0;
    char Real[5] = "Real";
    char oMaisPesado[31];
    float maisPesado = 0;

    scanf("%d%*c", &n);

    for(i = 0; i < n; i++){
        fgets(Movel[i].descricao, 50, stdin);
        RemoveBarraN(Movel[i].descricao);
        scanf("%f%*c", &Movel[i].peso);
        scanf("%c%*c", &Movel[i].tipo);

        if(Movel[i].peso > 10 && Movel[i].tipo == 's'){
            tipoS += 1;
        }
        if(strstr(Movel[i].descricao, Real) != NULL){
            terminaR += 1;
        }

        if(Movel[i].peso > maisPesado){
            maisPesado = Movel[i].peso;
            strcpy(oMaisPesado, Movel[i].descricao);
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", tipoS);
    printf("Termina em  \"Real\": %d\n", terminaR);
    printf("Mais pesado: \"%s\"\n", oMaisPesado);

    return 0;
}
