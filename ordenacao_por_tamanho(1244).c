#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char palavra[51];
    int posicao_original;
} Palavra;

int comparar(const void *a, const void *b) {
    Palavra *pa = (Palavra *)a;
    Palavra *pb = (Palavra *)b;
    int tamanho_a = strlen(pa->palavra);
    int tamanho_b = strlen(pb->palavra);

    if (tamanho_a != tamanho_b) {
        return tamanho_b - tamanho_a;
    }
 
    return pa->posicao_original - pb->posicao_original;
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 

    while (n--) {
        char linha[1001];
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0'; 

        
        Palavra palavras[50];
        int contador = 0;

        char *token = strtok(linha, " ");
        while (token != NULL) {
            strcpy(palavras[contador].palavra, token);
            palavras[contador].posicao_original = contador;
            contador++;
            token = strtok(NULL, " ");
        }

        qsort(palavras, contador, sizeof(Palavra), comparar);

        for (int i = 0; i < contador; i++) {
            if (i > 0) printf(" ");
            printf("%s", palavras[i].palavra);
        }
        printf("\n");
    }

    return 0;
}
