#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

void inicializar_fila(Fila *fila) {
    fila->inicio = 0;
    fila->fim = -1;
    fila->tamanho = 0;
}

void enfileirar(Fila *fila, int valor) {
    if (fila->tamanho < MAX) {
        fila->fim = (fila->fim + 1) % MAX;
        fila->dados[fila->fim] = valor;
        fila->tamanho++;
    }
}

int desenfileirar(Fila *fila) {
    if (fila->tamanho > 0) {
        int valor = fila->dados[fila->inicio];
        fila->inicio = (fila->inicio + 1) % MAX;
        fila->tamanho--;
        return valor;
    }
    return -1;
}

int fila_vazia(Fila *fila) {
    return fila->tamanho == 0;
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        Fila fila;
        inicializar_fila(&fila);

        for (int i = 1; i <= n; i++) {
            enfileirar(&fila, i);
        }

        printf("Discarded cards:");
        int primeiro = 1;

        while (fila.tamanho > 1) {
            if (!primeiro) {
                printf(",");
            }
            printf(" %d", desenfileirar(&fila)); // Descarta a carta do topo
            primeiro = 0;

            int carta = desenfileirar(&fila); // Move a próxima carta para o final
            enfileirar(&fila, carta);
        }

        printf("\nRemaining card: %d\n", desenfileirar(&fila));
    }

    return 0;
}
