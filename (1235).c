#include <stdio.h>
#include <string.h>

#define MAX_LEN 102

void decifrar_linha(char *linha) {
    int len = strlen(linha);
    int meio = len / 2;
    
    for (int i = meio - 1; i >= 0; i--) {
        putchar(linha[i]);
    }
    
    for (int i = len - 1; i >= meio; i--) {
        putchar(linha[i]);
    }
    putchar('\n');
}

int main() {
    int N;
    char linha[MAX_LEN];
    
    scanf("%d", &N);
    getchar();
    
    for (int i = 0; i < N; i++) {
        fgets(linha, MAX_LEN, stdin);
        linha[strcspn(linha, "\n")] = 0;
        decifrar_linha(linha);
    }
    
    return 0;
}
