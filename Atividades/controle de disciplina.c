#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_ALUNOS 30
#define MAX_MATRICULA 16
#define QUANT_NOTAS 3
#define QUANT_ALUNOS 31
#define DISCIPLINA 51
#define SITUACAO 12

typedef struct{
    int matricula[MAX_MATRICULA];
    char nome[MAX_ALUNOS];
    double notas[QUANT_NOTAS];
    float notaRec;
    char situacao[SITUACAO];
    }tAluno;

void TiraBarraN(char *disc[]){
    if (disc[strlen(disc)-1] == '\n'){
        disc[strlen(disc)-1] = '\0';
    }
}

int main(){
    tAluno aluno;
    int quantA[QUANT_ALUNOS];
    double media = 0, mediaInicial[30], mediaFinal[30];
    char disc[DISCIPLINA];
    int i, j;

    puts("Olah, seja bem vindo ao sistema!");
    printf("Qual a disciplina? \n");
    fgets(disc, 51, stdin);
    TiraBarraN(&disc);
    printf("Quantos alunos sao? \n");
    scanf("%d", quantA);

    for(i = 0; i < quantA; i++){
        printf("Digite a matricula do aluno: \n");
        scanf("%d", aluno[i].matricula);
        printf("Digite o nome do aluno: \n");
        scanf("%s", aluno[i].nome);
    }
    for(i = 0; i < quantA; i++){
        printf("Digite as tres notas do aluno \"%s\": \n", aluno[i].nome);
        for(j = 0; j < 3; j++){
            scanf("%lf", aluno[j].notas);
            media += aluno[j].notas;
        }
        mediaInicial[i] = media / 3;
    }
    for(i = 0; i < quantA; i++){
        if(mediaInicial[i] >= 4 && mediaInicial[i] < 7){
            printf("Digite a nota da recuperacao do aluno \"%s\" que possui a media atual de \"%lf\": \n", aluno[i].nome, mediaInicial[i]);
            scanf("%f", aluno[i].notaRec);
            mediaFinal = ((mediaInicial[i]*6) + (aluno[i].notaRec*4)) / 10;
            if(mediaFinal >= 7){
                aluno[i].situacao = "Aprovado";
            }else{
                aluno[i].situacao = "Reprovado";
            }
        }else if(mediaInicial[i] < 4){
            aluno[i].situacao = "Reprovado";
        }else{
            mediaInicial [i] = aluno.notas[0] + aluno.notas[1] + aluno.notas[2];
            aluno[i].situacao = "Aprovado";
        }
    }
    printf("\t\tDisciplina \"%s\\t\t"\n"
           "-------------------------------"
           "\t\tMatricula\tNome\t\tNota1\tNota2\tNota3\tRec\tMedia\tSituacao"
           "-------------------------------");
    for(i = 0; i < quantA; i++){
        printf("\t\t\"%d\"\t\"%s\"\t\t\"%lf\"\t\"%lf\"\t\"%lf\"\t\"%f\"\t\"%lf\"\t\"%s\"", aluno[i].matricula, aluno[i].nome, aluno[i].notas[0],
            aluno[i].notas[1], aluno[i].notas[2], aluno[i].notaRec, aluno[i].situacao);
    }


    return 0;
}
