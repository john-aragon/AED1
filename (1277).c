#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 51

int main() {
    int T, N;
    char nomes[MAX_ALUNOS][MAX_NOME];
    char presencas[MAX_ALUNOS][MAX_NOME];
    
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf("%s", nomes[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%s", presencas[i]);
        }
        
        int primeiro = 1;
        for (int i = 0; i < N; i++) {
            int total = 0, presenca = 0;
            for (int j = 0; presencas[i][j] != '\0'; j++) {
                if (presencas[i][j] != 'M') total++;
                if (presencas[i][j] == 'P') presenca++;
            }
            
            if (total > 0 && (presenca * 100 / total) < 75) {
                if (!primeiro) printf(" ");
                printf("%s", nomes[i]);
                primeiro = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}
