#include <stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101];

    while(scanf("%s\n%s", str1, str2) != EOF){      // EOF eh usado para quando o scanf, por exemplo, nao conseguer ler nada no mesmo.
        strstr(str1, str2);
        if(strstr(str1, str2) == NULL)
            printf("Nao resistente\n");
        else{
            printf("Resistente\n");
        }
    }

    return 0;
}
