#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int *vetor = (int*) malloc(N * sizeof(int));
    if (vetor == NULL) {
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int menor = vetor[0];
    int pos = 0;

    for (int i = 1; i < N; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    free(vetor); 
    return 0;
}
