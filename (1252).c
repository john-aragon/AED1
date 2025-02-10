#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
    int mod;
} Numero;


int comparar(const void *a, const void *b) {
    Numero *num1 = (Numero *)a;
    Numero *num2 = (Numero *)b;

    if (num1->mod != num2->mod)
        return num1->mod - num2->mod;

    int impar1 = num1->valor % 2 != 0;
    int impar2 = num2->valor % 2 != 0;

    if (impar1 && !impar2) return -1; 
    if (!impar1 && impar2) return 1; 

    if (impar1 && impar2)
        return num2->valor - num1->valor;

    return num1->valor - num2->valor;
}

int main() {
    int N, M;
    
    while (scanf("%d %d", &N, &M) && (N || M)) {
        Numero numeros[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &numeros[i].valor);
            numeros[i].mod = numeros[i].valor % M;
        }

        qsort(numeros, N, sizeof(Numero), comparar);

        printf("%d %d\n", N, M);
        for (int i = 0; i < N; i++) {
            printf("%d\n", numeros[i].valor);
        }
    }


    printf("0 0\n");

    return 0;
}
