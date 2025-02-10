#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;
    scanf("%d", &n);

    int *pares = malloc(n * sizeof(int));
    int *impares = malloc(n * sizeof(int));

    int count_pares = 0, count_impares = 0;

    for (int i = 0; i < n; i++) {
        int valor;
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares[count_pares++] = valor;
        } else {
            impares[count_impares++] = valor;
        }
    }

    qsort(pares, count_pares, sizeof(int), compare_asc);

    qsort(impares, count_impares, sizeof(int), compare_desc);

    for (int i = 0; i < count_pares; i++) {
        printf("%d\n", pares[i]);
    }

    for (int i = 0; i < count_impares; i++) {
        printf("%d\n", impares[i]);
    }

    free(pares);
    free(impares);

    return 0;
}
