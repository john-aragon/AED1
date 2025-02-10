#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 5100

int contar_aliteracoes(char *frase) {
    char *palavra_atual, *palavra_anterior = NULL;
    int aliteracoes = 0, em_grupo = 0;
    char letra_anterior = '\0';
    
    palavra_atual = strtok(frase, " ");
    while (palavra_atual) {
        char letra_atual = tolower(palavra_atual[0]);
        
        if (palavra_anterior && letra_atual == letra_anterior) {
            if (!em_grupo) {
                aliteracoes++;
                em_grupo = 1;
            }
        } else {
            em_grupo = 0;
        }
        
        letra_anterior = letra_atual;
        palavra_anterior = palavra_atual;
        palavra_atual = strtok(NULL, " ");
    }
    
    return aliteracoes;
}

int main() {
    char linha[MAX_LEN];
    
    while (fgets(linha, sizeof(linha), stdin)) {
        if (linha[0] == '\n') continue;
        linha[strcspn(linha, "\n")] = 0;
        printf("%d\n", contar_aliteracoes(linha));
    }
    
    return 0;
}
