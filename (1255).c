#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 202

void encontrar_letras_frequentes(char *linha) {
    int freq[26] = {0};
    int max_frequencia = 0;
  
    for (int i = 0; linha[i]; i++) {
        if (isalpha(linha[i])) {
            int indice = tolower(linha[i]) - 'a';
            freq[indice]++;
            if (freq[indice] > max_frequencia) {
                max_frequencia = freq[indice];
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] == max_frequencia) {
            putchar(i + 'a');
        }
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
        encontrar_letras_frequentes(linha);
    }
    
    return 0;
}
