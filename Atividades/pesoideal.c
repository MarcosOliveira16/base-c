#include <stdio.h>

int main(void){
    char s;
    float h, pesoId;
    
    printf("Informe o sexo \'m\' para masculino e \'f\' para feminino: ");
    scanf("%c", &s);
    printf("Digite a altura em metros: ");
    scanf("%f", &h);
    
    if ( s == 'm') {
        pesoId = ( 72.7 * h ) - 58;
        printf("O peso ideal para \'%c\' com altura %.2f eh: %.1fkg\n", s, h, pesoId);
        
    }else { 
        if ( s == 'f' ) {
            pesoId = ( 62.1 * h ) - 44.7;
            printf("O peso ideal para \'%c\' com altura %.2f eh: %.1fkg\n", s, h, pesoId);
            
        }
        
        
    
    }
    return 0;
}
