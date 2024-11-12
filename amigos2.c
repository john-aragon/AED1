#include <stdio.h>
#include <string.h>

#define MAX_AMIGOS 1000
#define TAM_MAX_NOME 21

int main() {
    char lista_atual[MAX_AMIGOS][TAM_MAX_NOME];
    char lista_nova[MAX_AMIGOS][TAM_MAX_NOME];
    char lista_temp[MAX_AMIGOS][TAM_MAX_NOME];
    char nome_indicado[TAM_MAX_NOME];
    int qtd_atual = 0, qtd_nova = 0, qtd_temp = 0;

    char linha[20000];
    fgets(linha, sizeof(linha), stdin);
    char *nome = strtok(linha, " \n");
    while (nome != NULL) {
        strcpy(lista_atual[qtd_atual++], nome);
        nome = strtok(NULL, " \n");
    }

    fgets(linha, sizeof(linha), stdin);
    nome = strtok(linha, " \n");
    while (nome != NULL) {
        strcpy(lista_nova[qtd_nova++], nome);
        nome = strtok(NULL, " \n");
    }

    fgets(nome_indicado, sizeof(nome_indicado), stdin);
    nome_indicado[strcspn(nome_indicado, "\n")] = '\0';
    int encontrado = 0;
    for (int i = 0; i < qtd_atual; i++) {
        if (strcmp(lista_atual[i], nome_indicado) == 0) {
            for (int j = 0; j < qtd_nova; j++) {
                strcpy(lista_temp[qtd_temp++], lista_nova[j]);
            }
            encontrado = 1;
        }
        strcpy(lista_temp[qtd_temp++], lista_atual[i]);
    }

    if (!encontrado) {
        for (int i = 0; i < qtd_nova; i++) {
            strcpy(lista_temp[qtd_temp++], lista_nova[i]);
        }
    }

    for (int i = 0; i < qtd_temp; i++) {
        if (i > 0) printf(" ");
        printf("%s", lista_temp[i]);
    }

    printf("\n");
    return 0;
}
