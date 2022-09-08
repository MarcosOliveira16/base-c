#include <stdio.h>
#include <string.h>


int main(){
    char str[100];
    unsigned int quant, i;

    scanf("%d", &quant);    // Numero de casos.

    for(i = 0; i < quant; i++){     // For de leitura das palavras.
        scanf("%s", str);

        // Para direncionar aos casos possiveis.

        if(strlen(str) == 3){       // Para direncionar aos casos possiveis de mudança das palavras.

             if(str[0] == 'U'&& str[1] == 'R'){     // Mudança para forma "URI"
                printf("URI");

             }else if(str[0] == 'O'&& str[1] == 'B'){   // Mudança para forma "OBI".
                printf("OBI");

             }else{
                printf("%s", str);      // Quando nao for possiviel a mudança quando for uma palavra com 3 caracteres.
             }

        }else{
            printf("%s", str);      // Quando for uma palavra maior que 3 caracteres.
        }
        if(i < quant - 1)
            printf(" ");       // Add espaço apos as palavrasa.
        }
    printf("\n");

    return 0;
}
