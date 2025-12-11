#include <stdio.h>

char descriptografar(char c) {
    switch (c) {
        case '@': return 'a';
        case '&': return 'e';
        case '!': return 'i';
        case '*': return 'o';
        case '#': return 'u';
        default: return c;
    }
}

int main() {
    char linha[256];
    
    while (fgets(linha, sizeof(linha), stdin)) {
        for (int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++) {
            printf("%c", descriptografar(linha[i]));
        }
        printf("\n");
    
    return 0;
}
