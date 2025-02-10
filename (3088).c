#include <stdio.h>
#include <string.h>

int main() {
    char linha[1001];
    
    while (fgets(linha, sizeof(linha), stdin)) {
        int i, j = 0;
        int len = strlen(linha);
        
        for (i = 0; i < len; i++) {
            if (linha[i] == ' ' && (linha[i + 1] == ',' || linha[i + 1] == '.')) {
                continue; 
            }
            printf("%c", linha[i]);
        }
    }
    
    return 0;
}
