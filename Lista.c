#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char valor[21];
    struct No *prox;
} No;

No* criarNo(char *valor) {
    No* novoNo = (No*) malloc(sizeof(No));
    strcpy(novoNo->valor, valor);
    novoNo->prox = NULL;
    return novoNo;
}

void inserirOrdenado(No **inicio, char *valor) {
    No *atual = *inicio, *anterior = NULL;
    while (atual != NULL && strcmp(atual->valor, valor) < 0) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual != NULL && strcmp(atual->valor, valor) == 0) {
        return;
    }
    No *novoNo = criarNo(valor);
    if (anterior == NULL) {
        novoNo->prox = *inicio;
        *inicio = novoNo;
    } else {
        novoNo->prox = atual;
        anterior->prox = novoNo;
    }
}

void imprimirLista(No *inicio) {
    No *atual = inicio;
    while (atual != NULL) {
        printf("%s", atual->valor);
        if (atual->prox != NULL) {
            printf(" ");
        }
        atual = atual->prox;
    }
    printf("\n");
}

void liberarLista(No *inicio) {
    No *atual = inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }
}

int main() {
    int quantidadeListas = 0;
    scanf("%d", &quantidadeListas);
    getchar();
    No *listas[quantidadeListas];

    for (int i = 0; i < quantidadeListas; i++) {
        char linha[99999];
        fgets(linha, sizeof(linha), stdin);
        No *inicio = NULL;
        char *palavra = strtok(linha, " \n");
        while (palavra != NULL) {
            inserirOrdenado(&inicio, palavra);
            palavra = strtok(NULL, " \n");
        }
        listas[i] = inicio;
    }

    for (int i = 0; i < quantidadeListas; i++) {
        imprimirLista(listas[i]);
        liberarLista(listas[i]);
    }
    return 0;
}
