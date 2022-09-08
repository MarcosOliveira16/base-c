#include <stdio.h>
#include <string.h>

int main(){

    unsigned int t, i , valor, leds = 0;    // "valor" armazena a quantidade de numeros digitados, assim usando como limitador no for;
    char str[100];

    scanf("%d", &t);

    while(t--){
        scanf("%s", str);
        valor = strlen(str);            // "strlen" usado para retornar o tamanho dos numeros digitados no total, sendo que no tipo char eh um byte.

        for(i = 0; i < valor; i++){
            if(str[i] == '0')
                leds += 6;

            else if(str[i] == '1')
                leds += 2;

            else if(str[i] == '2')
                leds += 5;

            else if(str[i] == '3')
                leds += 5;

            else if(str[i] == '4')
                leds += 4;

            else if(str[i] == '5')
                leds += 5;

            else if(str[i] == '6')
                leds += 6;

            else if(str[i] == '7')
               leds += 3;

            else if(str[i] == '8')
                leds += 7;

            else if(str[i] == '9')
                leds += 6;
        }

        printf("%d leds\n", leds);

    }

    return 0;

}
