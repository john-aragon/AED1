#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int *p = vetor;
    int menor = *p;
    int pos = 0;

    for (int i = 1; i < N; i++) {
        if (*(p + i) < menor) {
            menor = *(p + i);
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
