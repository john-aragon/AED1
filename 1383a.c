#include <stdio.h>

int valido(int matriz[9][9]) {
    int i, j, k;
    int visto[10];

    //Linhas
    for (i = 0; i < 9; i++) {
        for (k = 1; k <= 9; k++) visto[k] = 0;
        for (j = 0; j < 9; j++) {
            int num = matriz[i][j];
            if (visto[num]) return 0;
            visto[num] = 1;
        }
    }

    //Colunas
    for (j = 0; j < 9; j++) {
        for (k = 1; k <= 9; k++) visto[k] = 0;
        for (i = 0; i < 9; i++) {
            int num = matriz[i][j];
            if (visto[num]) return 0; 
            visto[num] = 1;
        }
    }

    //3x3
    for (int bi = 0; bi < 9; bi += 3) {
        for (int bj = 0; bj < 9; bj += 3) {
            for (k = 1; k <= 9; k++) visto[k] = 0;
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    int num = matriz[bi + i][bj + j];
                    if (visto[num]) return 0;
                    visto[num] = 1;
                }
            }
        }
    }

    return 1;
}

int main() {
    int n, matriz[9][9];
    scanf("%d", &n);

    for (int caso = 1; caso <= n; caso++) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", caso);
        if (valido(matriz))
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
