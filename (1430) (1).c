#include <stdio.h>
#include <string.h>

int main() {
    char entrada[205]; 
    char notas[] = "WHQESTX";
    float duracoes[] = {1.0, 0.5, 0.25, 0.125, 0.0625, 0.03125, 0.015625}; 

    while (1) {
        scanf("%s", entrada);

        if (entrada[0] == '*') break; 

        int compassoCorreto = 0; 
        float somaDuracao = 0.0; 

        for (int i = 0; entrada[i] != '\0'; i++) {
            if (entrada[i] == '/') {
                if (somaDuracao == 1.0) compassoCorreto++; 
                somaDuracao = 0.0;
            } else {
                
                for (int j = 0; j < 7; j++) {
                    if (entrada[i] == notas[j]) {
                        somaDuracao += duracoes[j];
                        break;
                    }
                }
            }
        }

        printf("%d\n", compassoCorreto);
    }

    return 0;
}
