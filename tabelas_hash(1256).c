#include <stdio.h>
#include <stdlib.h>

#define MAX_M 100
#define MAX_C 200

typedef struct No {
    int valor;
    struct No *prox;
} No;


void insert(No **head, int valor) {
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

void free_list(No *head) {
    No *remover = head;
    while (remover) {
        No *temp = remover;
        remover = remover->prox;
        free(temp);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int m, c;
        scanf("%d %d", &m, &c);

        No *hash_table[MAX_M] = {NULL}; 
        
        for (int i = 0; i < c; i++) {
            int key;
            scanf("%d", &key);
            int index = key % m; 
            insert(&hash_table[index], key);
        }

        for (int i = 0; i < m; i++) {
            printf("%d ->", i);
            No *current = hash_table[i];
            while (current != NULL) {
                printf(" %d ->", current->valor);
                current = current->prox;
            }
            printf(" \\\n");
        }

        for (int i = 0; i < m; i++) {
            free_list(hash_table[i]);
        }

        if (n > 0) {
            printf("\n"); 
        }
    }

    return 0;
}
