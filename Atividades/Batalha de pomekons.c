#include <stdio.h>

/** at, df, nv e b, sao respectivamente os valores de ataque, defesa, nivel e bonus. **/

double valorgolpe(unsigned int at, unsigned int df, unsigned int nv, unsigned int b){
    if(nv %2 == 0){
        return (at+df) / 2 + b;
    }else{
        return (at+df) / 2;
    }
}

int main(void){
    unsigned int t, b, atD, dfD, nvD, atG, dfG, nvG;   /* D = Dabriel e G = Guarte. */
    double pomekonD, pomekonG;                         /* pomekon eh para receber o valor total do ataque dos seus respectivos donos. */

    scanf("%u", &t);

    while(t--){
        scanf("%u", &b);
        scanf("%u%u%u", &atD, &dfD, &nvD);
        scanf("%u%u%u", &atG, &dfG, &nvG);

        pomekonD = valorgolpe(atD, dfD, nvD, b);
        pomekonG = valorgolpe(atG, dfG, nvG, b);
        if(pomekonD > pomekonG){
            printf("Dabriel\n");
        }
        if(pomekonG > pomekonD){
            printf("Guarte\n");
        }
        if(pomekonD == pomekonG){
            printf("Empate\n");
        }
    }

    return 0;
}
