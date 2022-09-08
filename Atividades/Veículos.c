#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// estrutura de dados de um carro.
typedef struct Movel{
    char Modelo[21];
    char Marca[21];
    int Ano;
    int Preco;
    }tVeiculo;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    tVeiculo v1, v2;

    fgets(v1.Modelo, 21, stdin);
    RemoveBarraN(v1.Modelo);
    fgets(v1.Marca, 21, stdin);
    RemoveBarraN(v1.Marca);
    scanf("%d", &v1.Ano);
    scanf("%d", &v1.Preco);

    getchar();
    fgets(v2.Modelo, 21, stdin);
    RemoveBarraN(v2.Modelo);
    fgets(v2.Marca, 21, stdin);
    RemoveBarraN(v2.Marca);
    scanf("%d", &v2.Ano);
    scanf("%d", &v2.Preco);

    // classificação por ano
    if(v1.Ano < v2.Ano){
        printf("%s %s\n", v1.Marca, v1.Modelo);
    }else if(v2.Ano < v1.Ano){
        printf("%s %s\n", v2.Marca, v2.Modelo);
    // classificação por preço
    }else if(v1.Ano == v2.Ano){
        if(v1.Preco < v2.Preco){
            printf("%s %s\n", v1.Marca, v1.Modelo);
        }else{
            printf("%s %s\n", v2.Marca, v2.Modelo);
        }
    }

    return 0;
}
