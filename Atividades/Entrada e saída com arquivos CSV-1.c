#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int cpf;   // cpf da pessoa
    char nome[50];  // nome da pessoa
    char snome[50]; // sobrenome da pessoa
    char end[50]; // endereço onde a pessoa mora
    char tel[50]; // telefone da pessoa
    }tDados;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    FILE *fp;
    int n, i;

    scanf("%d", &n); // ou getchar();
    tDados pessoa[n];

     for(i = 0; i < n; i++){
        scanf("%d", &pessoa[i].cpf);
        getchar();

        fgets(pessoa[i].nome, 50, stdin);
        RemoveBarraN(pessoa[i].nome);

        fgets(pessoa[i].snome, 50, stdin);
        RemoveBarraN(pessoa[i].snome);

        fgets(pessoa[i].end, 50, stdin);
        RemoveBarraN(pessoa[i].end);

        fgets(pessoa[i].tel, 50, stdin);
        RemoveBarraN(pessoa[i].tel);
    }
    // abertura do arquivo que escreve.
    fp = fopen("atividade.csv", "w");

    fprintf(fp, "CPF,nome,snome,endereço,telefone\n");
    // Escrevendo o arquivo em csv.
    for(i = 0; i < n; i++){
        fprintf(fp, "%d,%s,%s,%s,%s\n", pessoa[i].cpf, pessoa[i].nome, pessoa[i].snome, pessoa[i].end, pessoa[i].tel);
    }
    // fechamento do arquivo que escreve.
    fclose(fp);

    // abertura do arquivo que ler.
    fp = fopen("atividade.csv", "r");

    char linha[300];
    // Lendo o arquivo
    for(i = 0; i <= n; i++){
        fgets(linha, 300, fp);
        printf("%s", linha);
    }
    // fechamento do arquivo que ler.
    fclose(fp);

    return 0;
}
