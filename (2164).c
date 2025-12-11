#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_POMEKONS 151

// Estrutura para armazenar nomes únicos usando uma tabela hash
typedef struct {
    char name[1001]; // Nome do Pomekon (máx. 1000 caracteres)
} Pomekon;

int compare(const void *a, const void *b) {
    return strcmp(((Pomekon *)a)->name, ((Pomekon *)b)->name);
}

int main() {
    int N;
    scanf("%d", &N);

    Pomekon pomekons[N]; 
    int uniqueCount = 0;

    for (int i = 0; i < N; i++) {
        char name[1001];
        scanf("%s", name);

        strcpy(pomekons[uniqueCount].name, name);
        uniqueCount++;
    }

    qsort(pomekons, uniqueCount, sizeof(Pomekon), compare);

    int uniquePomekons = 0;
    for (int i = 0; i < uniqueCount; i++) {
        if (i == 0 || strcmp(pomekons[i].name, pomekons[i - 1].name) != 0) {
            uniquePomekons++;
        }
    }

    int faltam = MAX_POMEKONS - uniquePomekons;
    printf("Falta(m) %d pomekon(s).\n", faltam);

    return 0;
}
