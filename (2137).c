#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    int N;
    char livros[1000][5];

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s", livros[i]);
        }

        qsort(livros, N, sizeof(livros[0]), comparar);

        for (int i = 0; i < N; i++) {
            printf("%s\n", livros[i]);
        }
    }

    return 0;
}
