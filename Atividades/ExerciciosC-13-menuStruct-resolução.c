#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastrar o tesouro"
                "\n2 - Imprime as informacoes do tesouro cadastrado"
                "\n3 - Distancia a partir de um ponto em relacao ao tesouro"
                "\n5 - Sair\n\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
    printf("\nDescreva o tesouro: ");
    TiraBarraN(&reg);
    scanf("%*c");
    fgets(reg->descricao, 51, stdin);
    printf("\nDigite o valor estimado do seu tesouro(reais): ");
    scanf("%f", &reg->valor);
    printf("\nDigite as coordenadas do tesouro (x e y): ");
    scanf("%d%d", &reg->x, &reg->y);

    return reg;
}

void TiraBarraN(tRegistro *reg){
    if (reg->descricao[strlen(reg->descricao)-1] == '\n'){
        reg->descricao[strlen(reg->descricao)-1] = '\0';
    }
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizad
    TiraBarraN(reg);
    printf("\nO tesouro contem \"%s\"\n", reg->descricao);
    printf("O tesouro eh estimado em \"%.2f\" reais.\n", reg->valor);
    printf("O tesouro esta localizado nas coordenadas (%d, %d).\n", reg->x, reg->y);
}

float Distancia(tRegistro reg, int x, int y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    float dist;

    dist = pow(reg.x - x, 2) + pow(reg.y - y, 2);

    return dist;
}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao, coordX, coordY;
    float dist;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                printf("Digite suas atuais coordenadas(x e y): ");
                scanf("%d%d", &coordX, &coordY);

                dist = Distancia(reg, coordX, coordY);
                if(dist != 0.0){
                    printf("Voce esta a uma distancia de %.1f metro(s) do tesouro\n", dist);
                }else{
                    printf("Voce chegou ao tesouro!\n");
                }
                    break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus ( Obrigado por brincar ^-^ )");
    return 0;
}
