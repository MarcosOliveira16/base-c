#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int Dia;
    int Mes;
    int Ano;
    }tData;

// verificar as datas de nascimento
int Compara(tData d1, tData d2){
    if(d1.Ano == d2.Ano){
        if(d1.Mes == d2.Mes){
            if(d1.Dia == d2.Dia){
                return 0;
            }else if(d1.Dia < d2.Dia){
                return 1;
            }else
                return -1;
        }else if(d1.Mes < d2.Mes){
            return 1;
        }else
            return -1;
    }else if(d1.Ano < d2.Ano){
        return 1;
    }else
        return -1;

}

int main(){
    tData d1, d2;
    int result;

    scanf("%d", &d1.Dia);
    scanf("%d", &d1.Mes);
    scanf("%d", &d1.Ano);

    scanf("%d", &d2.Dia);
    scanf("%d", &d2.Mes);
    scanf("%d", &d2.Ano);

    result = Compara(d1, d2);
    if(result == 0){
        puts("Pessoas são da mesma idade");
    }else if(result == 1){
        puts("Pessoa 1 é mais velha");
    }else{
        puts("Pessoa 2 é mais velha");
    }


    return 0;
}
