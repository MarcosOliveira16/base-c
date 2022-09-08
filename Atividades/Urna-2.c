#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define Max_Nome 50

typedef struct{
    char nome[Max_Nome];
    int numero;
    int quantVotos;
    }tRegistro;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}
    // função para procurar o e retorna o indice do vencedor
int Vencendor(tRegistro c[], int len){
    int iVencendor = 0;
    int maior = 0;

    for(int i = 0; i < len ; i++){
        if(c[i].quantVotos > maior){
            iVencendor = i;
            maior = c[i].quantVotos;
        }
    }
    return iVencendor;
}

int main(){
    int quantCand, i;
    int votoPart, votoNulo = 0, contaVotos = 0;

    scanf("%d", &quantCand);
    tRegistro cand[quantCand];

    // declarando os candidatos
    for(i = 0; i < quantCand; i++){
        scanf("%d%*c", &cand[i].numero);
        fgets(cand[i].nome, Max_Nome, stdin);
        RemoveBarraN(cand[i].nome);
        cand[i].quantVotos = 0;

    }

    int flag;
    do{
        scanf("%d", &votoPart); // lendo os votos

        // procurando se o voto casa com o numero de algum candidato
        if(votoPart > 0){
            flag = 0;
            for(i = 0; i < quantCand; i++){
                if(cand[i].numero == votoPart){
                    cand[i].quantVotos ++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
            votoNulo++;
            }
            contaVotos += 1;
        }

    }while(votoPart > 0);
    // chamada da função para achar o indice do vencedor
    int iVenc = Vencendor(cand, quantCand);
    // exibindo os nomes com as porcentagens de votos e destacando o vencedor
    for(i = 0; i < quantCand; i++){
        if(i == iVenc)
            printf("%.2f - %d - %s VENCEDOR\n", (cand[i].quantVotos * 100.0) / contaVotos, cand[i].numero, cand[i].nome);
        else
            printf("%.2f - %d - %s\n", (cand[i].quantVotos * 100.0) / contaVotos, cand[i].numero, cand[i].nome);
    }
    printf("%.2f - Nulos\n", (votoNulo * 100.0) / contaVotos);

    return 0;
}
