#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMAS 26

int main() {
    int N;
    
    while (scanf("%d", &N), N) {
        int resolvidos = 0, tempo_total = 0;
        int penalidade[MAX_PROBLEMAS] = {0};
        int resolvido[MAX_PROBLEMAS] = {0}; 
        
        for (int i = 0; i < N; i++) {
            char problema;
            int tempo;
            char resultado[10];
            
            scanf(" %c %d %s", &problema, &tempo, resultado);
            int index = problema - 'A';
            
            if (strcmp(resultado, "correct") == 0) {
                if (!resolvido[index]) {
                    resolvidos++;
                    tempo_total += tempo + penalidade[index];
                    resolvido[index] = 1;
                }
            } else {
                if (!resolvido[index]) {
                    penalidade[index] += 20;
                }
            }
        }
        
        printf("%d %d\n", resolvidos, tempo_total);
    }
    
    return 0;
}
