#include <stdio.h>
#include <string.h>

#define MAX_M 1000000
#define MAX_N 1000
#define MAX_LEN 81

typedef struct {
    char jp[MAX_LEN];
    char pt[MAX_LEN];
} Dicionario;

Dicionario dicionario[MAX_M];

void traduzir_musica() {
    int T, M, N;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d", &M, &N);
        getchar();
        
        for (int i = 0; i < M; i++) {
            fgets(dicionario[i].jp, MAX_LEN, stdin);
            fgets(dicionario[i].pt, MAX_LEN, stdin);
            dicionario[i].jp[strcspn(dicionario[i].jp, "\n")] = 0;
            dicionario[i].pt[strcspn(dicionario[i].pt, "\n")] = 0;
        }
        
        for (int i = 0; i < N; i++) {
            char linha[MAX_LEN * 10], palavra[MAX_LEN];
            fgets(linha, sizeof(linha), stdin);
            linha[strcspn(linha, "\n")] = 0;
            
            char *token = strtok(linha, " ");
            int primeiro = 1;
            while (token) {
                int traduzida = 0;
                for (int j = 0; j < M; j++) {
                    if (strcmp(token, dicionario[j].jp) == 0) {
                        if (!primeiro) printf(" ");
                        printf("%s", dicionario[j].pt);
                        traduzida = 1;
                        break;
                    }
                }
                if (!traduzida) {
                    if (!primeiro) printf(" ");
                    printf("%s", token);
                }
                primeiro = 0;
                token = strtok(NULL, " ");
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    traduzir_musica();
    return 0;
}
