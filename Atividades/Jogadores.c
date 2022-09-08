#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// estrutura de dados de um jogador.
typedef struct{
    char nome[31];
    int idade;
    float chutes;
    float gols;
    }tDados;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    tDados j1, j2;
    float pontaria1, pontaria2;

    fgets(j1.nome, 31, stdin);
    RemoveBarraN(j1.nome);
    scanf("%d", &j1.idade);
    scanf("%f", &j1.chutes);
    scanf("%f", &j1.gols);

    pontaria1 = j1.gols / j1.chutes;

    getchar();
    fgets(j2.nome, 31, stdin);
    RemoveBarraN(j2.nome);
    scanf("%d", &j2.idade);
    scanf("%f", &j2.chutes);
    scanf("%f", &j2.gols);

    pontaria2 = j2.gols / j2.chutes;


    if(pontaria1 > pontaria2){
        printf("%s (%d)\n", j1.nome, j1.idade);
    }else{
        printf("%s (%d)\n", j2.nome, j2.idade);
    }

    return 0;
}
